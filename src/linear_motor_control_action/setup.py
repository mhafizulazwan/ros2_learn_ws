from setuptools import find_packages, setup

package_name = 'linear_motor_control_action'

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
    maintainer_email='mhafizulazwan@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'linear_control_server = linear_motor_control_action.server:main',
            'linear_control_client = linear_motor_control_action.client:main'

        ],
    },
)
