from setuptools import find_packages
from setuptools import setup

setup(
    name='self_interface',
    version='0.0.0',
    packages=find_packages(
        include=('self_interface', 'self_interface.*')),
)
