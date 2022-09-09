/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */

#ifndef _COLORBOXDEMOCOMMON_H
#define _COLORBOXDEMOCOMMON_H

#include "stdint.h"
#include "qvector.h"

/////////////////////////////
template<typename T>
struct RGBValues{
    T rValue;
    T gValue;
    T bValue;
} ;

// Used for 1DLUTs
typedef RGBValues<int16_t> RGB12BitIntValues ;
typedef QVector<RGB12BitIntValues> RGB12BitIntLutValues;

// Used for 3DLUTs
typedef RGBValues<uint16_t> RGB16BitIntCoefs ;
typedef QVector<RGB16BitIntCoefs> RGB16BitIntLutCoefs;

// Used fr RGB Frame Transfers
typedef RGBValues<uint16_t> RGB16BitUIntValues ;
typedef QVector<RGB16BitUIntValues> RGB16BitUIntBufferValues;

// Used for Matrix
typedef struct {
    // row major order. last 4 entries should to be 0,0,0,1;
    //matrix4x4[3,7,11] are 12 bit offsets(256.0 is smpte 12 bit black offset)
    float matrix4x4[16];
} ColorBoxDynamicMatrix;

#endif // _COLORBOXDEMOCOMMON_H
