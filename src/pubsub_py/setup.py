from setuptools import find_packages, setup

package_name = 'pubsub_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hafizulazwan',
    maintainer_email='hafizulazwan@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sine_wave_publisher = pubsub_py.sine_wave_publisher:main',
            'sine_wave_subscriber = pubsub_py.sine_wave_subscriber:main'
        ],
    },
)
