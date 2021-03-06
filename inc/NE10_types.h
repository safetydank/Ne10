/*
 *  Copyright 2011-12 ARM Limited
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
 * NE10 Library : inc/NE10_types.h
 */

/** NE10 defines a number of types for use in its function signatures.
 *  The types are defined within this header file.
 */

#ifndef NE10_TYPES_H
#define NE10_TYPES_H

#include <stdio.h>
#include <assert.h>

/////////////////////////////////////////////////////////
// constant values that are used across the library
/////////////////////////////////////////////////////////
#define NE10_OK 0
#define NE10_ERR -1

/////////////////////////////////////////////////////////
// some external definitions to be exposed to the users
/////////////////////////////////////////////////////////

typedef signed char             ne10_int8_t;
typedef unsigned char           ne10_uint8_t;
typedef signed short            ne10_int16_t;
typedef unsigned short          ne10_uint16_t;
typedef signed int              ne10_int32_t;
typedef unsigned int            ne10_uint32_t;
typedef signed long long int    ne10_int64_t;
typedef unsigned long long int  ne10_uint64_t;
typedef float                   ne10_float32_t;
typedef double                  ne10_float64_t;
typedef int                     ne10_result_t;     // resulting [error-]code

typedef struct
{
        ne10_float32_t x;
        ne10_float32_t y;
} ne10_vec2f_t; // a 2-tuple of ne10_float32_t values

typedef struct
{
        ne10_float32_t x;
        ne10_float32_t y;
        ne10_float32_t z;
} ne10_vec3f_t; // a 3-tuple of ne10_float32_t values

typedef struct
{
        ne10_float32_t x;
        ne10_float32_t y;
        ne10_float32_t z;
        ne10_float32_t w;
} ne10_vec4f_t; // a 4-tuple of ne10_float32_t values


typedef struct { ne10_float32_t r1; ne10_float32_t r2; } __attribute__((packed)) ne10_mat_row2f;

typedef struct
{
        ne10_mat_row2f c1;
        ne10_mat_row2f c2;

} __attribute__((packed)) ne10_mat2x2f_t;     // a 2x2 matrix

static inline void createColumnMajorMatrix2x2( ne10_mat2x2f_t * outMat, ne10_float32_t m11, ne10_float32_t m21, ne10_float32_t m12, ne10_float32_t m22)
{
   assert( NULL != outMat );

    outMat->c1.r1 = m11;
    outMat->c1.r2 = m21;
    outMat->c2.r1 = m12;
    outMat->c2.r2 = m22;
}


typedef struct { ne10_float32_t r1; ne10_float32_t r2; ne10_float32_t r3; } __attribute__((packed)) ne10_mat_row3f;

typedef struct
{
        ne10_mat_row3f c1;
        ne10_mat_row3f c2;
        ne10_mat_row3f c3;

} __attribute__((packed)) ne10_mat3x3f_t;     // a 3x3 matrix

static inline void createColumnMajorMatrix3x3( ne10_mat3x3f_t * outMat, ne10_float32_t m11, ne10_float32_t m21, ne10_float32_t m31,
                                                                       ne10_float32_t m12, ne10_float32_t m22, ne10_float32_t m32,
                                                                       ne10_float32_t m13, ne10_float32_t m23, ne10_float32_t m33)
{
    assert( NULL != outMat );

    outMat->c1.r1 = m11;
    outMat->c1.r2 = m21;
    outMat->c1.r3 = m31;

    outMat->c2.r1 = m12;
    outMat->c2.r2 = m22;
    outMat->c2.r3 = m32;

    outMat->c3.r1 = m13;
    outMat->c3.r2 = m23;
    outMat->c3.r3 = m33;
}


typedef struct { ne10_float32_t r1; ne10_float32_t r2; ne10_float32_t r3; ne10_float32_t r4; } __attribute__((packed)) ne10_mat_row4f;

typedef struct
{
        ne10_mat_row4f c1;
        ne10_mat_row4f c2;
        ne10_mat_row4f c3;
        ne10_mat_row4f c4;

} __attribute__((packed)) ne10_mat4x4f_t;     // a 4x4 matrix

static inline void createColumnMajorMatrix4x4( ne10_mat4x4f_t * outMat, ne10_float32_t m11, ne10_float32_t m21, ne10_float32_t m31, ne10_float32_t m41,
                                                                       ne10_float32_t m12, ne10_float32_t m22, ne10_float32_t m32, ne10_float32_t m42,
                                                                       ne10_float32_t m13, ne10_float32_t m23, ne10_float32_t m33, ne10_float32_t m43,
                                                                       ne10_float32_t m14, ne10_float32_t m24, ne10_float32_t m34, ne10_float32_t m44)
{
    assert( NULL != outMat );

    outMat->c1.r1 = m11;
    outMat->c1.r2 = m21;
    outMat->c1.r3 = m31;
    outMat->c1.r4 = m41;

    outMat->c2.r1 = m12;
    outMat->c2.r2 = m22;
    outMat->c2.r3 = m32;
    outMat->c2.r4 = m42;

    outMat->c3.r1 = m13;
    outMat->c3.r2 = m23;
    outMat->c3.r3 = m33;
    outMat->c3.r4 = m43;

    outMat->c4.r1 = m14;
    outMat->c4.r2 = m24;
    outMat->c4.r3 = m34;
    outMat->c4.r4 = m44;
}


#endif
