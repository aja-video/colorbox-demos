"""
    OpenAPI Soji

    This is a REST API for the AJA Soji product.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: support@aja.com
    NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
          Do not edit the class manually.

    Copyright (C) 2020-2022 AJA Video Systems, Inc.  All rights reserved.
"""


from setuptools import setup, find_packages  # noqa: H301

NAME = "openapi-client"
VERSION = "1.0.0"
# To install the library, run the following
#
# python setup.py install
#
# prerequisite: setuptools
# http://pypi.python.org/pypi/setuptools

REQUIRES = [
  "urllib3 >= 1.25.3",
  "python-dateutil",
]

setup(
    name=NAME,
    version=VERSION,
    description="OpenAPI Soji",
    author="AJA API Support",
    author_email="support@aja.com",
    url="",
    keywords=["OpenAPI", "OpenAPI-Generator", "OpenAPI Soji"],
    python_requires=">=3.6",
    install_requires=REQUIRES,
    packages=find_packages(exclude=["test", "tests"]),
    include_package_data=True,
    license="Apache-2.0",
    long_description="""\
    This is a REST API for the AJA Soji product.  # noqa: E501
    """
)