# FrameStore


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**enabled** | **bool** | true if frame store is enabled else disabled | [optional] 
**dynamic** | **bool** | true if frame store can be dynamically adjusted | [optional] 
**image_name** | **str** | The custom name for the captured image | [optional] 
**timecode_appended** | **bool** | Flag to append the timecode of the captured image onto the filename | [optional] 
**file_type** | [**FileTypeChoice**](FileTypeChoice.md) |  | [optional] 
**library_entry** | **int** | library entry number, zero is black | [optional] 
**format** | [**VideoFormat**](VideoFormat.md) |  | [optional] 
**convert** | [**VideoConvertChoice**](VideoConvertChoice.md) |  | [optional] 
**rgb_range** | [**RgbRange**](RgbRange.md) |  | [optional] 
**any string name** | **bool, date, datetime, dict, float, int, list, str, none_type** | any string name can be used but the value must be the correct type | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


