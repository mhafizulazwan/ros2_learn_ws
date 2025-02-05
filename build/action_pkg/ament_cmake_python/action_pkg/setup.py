from setuptools import find_packages
from setuptools import setup

setup(
    name='action_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('action_pkg', 'action_pkg.*')),
)
