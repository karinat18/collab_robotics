import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='locobot_autonomy',
    version='0.0.0',
    packages=find_packages(
        include=('locobot_autonomy', 'locobot_autonomy.*')),
)
