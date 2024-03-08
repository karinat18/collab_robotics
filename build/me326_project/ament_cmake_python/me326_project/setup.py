import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='me326_project',
    version='0.0.0',
    packages=find_packages(
        include=('me326_project', 'me326_project.*')),
)
