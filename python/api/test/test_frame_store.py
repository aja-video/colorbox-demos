"""
    OpenAPI ColorBox

    This is a REST API for the AJA ColorBox product.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: support@aja.com
    NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
          Do not edit the class manually.

    Copyright (C) 2020-2022 AJA Video Systems Inc.  All rights reserved.
"""


import sys
import unittest

import openapi_client
from openapi_client.model.file_type_choice import FileTypeChoice
from openapi_client.model.rgb_range import RgbRange
from openapi_client.model.video_convert_choice import VideoConvertChoice
from openapi_client.model.video_format import VideoFormat
globals()['FileTypeChoice'] = FileTypeChoice
globals()['RgbRange'] = RgbRange
globals()['VideoConvertChoice'] = VideoConvertChoice
globals()['VideoFormat'] = VideoFormat
from openapi_client.model.frame_store import FrameStore


class TestFrameStore(unittest.TestCase):
    """FrameStore unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testFrameStore(self):
        """Test FrameStore"""
        # FIXME: construct object with mandatory attributes with example values
        # model = FrameStore()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
