# OrionConfig


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**enabled** | **bool** | true if stage is enabled else disabled (unity passthru) | [optional] 
**gamma_comp** | **bool** |  | [optional]  if omitted the server will use the default value of False
**conversion** | [**OrionConversion**](OrionConversion.md) |  | [optional] 
**mode** | [**OrionMode**](OrionMode.md) |  | [optional] 
**method** | [**OrionMethod**](OrionMethod.md) |  | [optional] 
**source_range** | [**OrionSourceRange**](OrionSourceRange.md) |  | [optional] 
**hdr_ref** | **float** |  | [optional]  if omitted the server will use the default value of 75.0
**sdr_ref** | **float** |  | [optional]  if omitted the server will use the default value of 100.0
**hdr_peak** | **int** |  | [optional]  if omitted the server will use the default value of 1000
**sdr_eotf** | [**OrionSdrEotf**](OrionSdrEotf.md) |  | [optional] 
**pre_knee** | **float** |  | [optional]  if omitted the server will use the default value of 100.0
**pre_amount** | **float** |  | [optional]  if omitted the server will use the default value of 0.0
**post_knee** | **float** |  | [optional]  if omitted the server will use the default value of 100.0
**post_amount** | **float** |  | [optional]  if omitted the server will use the default value of 0.0
**clamping** | [**OrionClamping**](OrionClamping.md) |  | [optional] 
**implementation** | [**OrionImplementation**](OrionImplementation.md) |  | [optional] 
**any string name** | **bool, date, datetime, dict, float, int, list, str, none_type** | any string name can be used but the value must be the correct type | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


