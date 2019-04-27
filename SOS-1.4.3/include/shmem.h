/* -*- C -*-
 *
 * Copyright 2011 Sandia Corporation. Under the terms of Contract
 * DE-AC04-94AL85000 with Sandia Corporation, the U.S.  Government
 * retains certain rights in this software.
 *
 * Copyright (c) 2016 Intel Corporation. All rights reserved.
 * This software is available to you under the BSD license.
 *
 * This file is part of the Sandia OpenSHMEM software package. For license
 * information, see the LICENSE file in the top level directory of the
 * distribution.
 *
 */

/*
 * This is a generated file, do not edit directly.
 */



#ifndef SHMEM_H
#define SHMEM_H

#include <stddef.h>
#include <stdint.h>
#include <shmem-def.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifndef SHMEM_FUNCTION_ATTRIBUTES
#  if SHMEM_HAVE_ATTRIBUTE_VISIBILITY == 1
#     define SHMEM_FUNCTION_ATTRIBUTES __attribute__((visibility("default")))
#  else
#     define SHMEM_FUNCTION_ATTRIBUTES
#  endif
#endif

#ifndef SHMEM_ATTRIBUTE_DEPRECATED
#   if SHMEM_HAVE_ATTRIBUTE_DEPRECATED == 1
#       define SHMEM_ATTRIBUTE_DEPRECATED __attribute__((deprecated))
#   else
#       define SHMEM_ATTRIBUTE_DEPRECATED
#   endif
#endif

/* Library Setup, Exit, and Query Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_init(void);
SHMEM_FUNCTION_ATTRIBUTES int shmem_init_thread(int requested, int *provided);
SHMEM_FUNCTION_ATTRIBUTES void shmem_query_thread(int *provided);
SHMEM_FUNCTION_ATTRIBUTES void shmem_finalize(void);
SHMEM_FUNCTION_ATTRIBUTES int shmem_n_pes(void);
SHMEM_FUNCTION_ATTRIBUTES int shmem_my_pe(void);
#ifdef __cplusplus
#  if __cplusplus >= 201103L
[[noreturn]] void shmem_global_exit(int status) SHMEM_FUNCTION_ATTRIBUTES;
#  else
SHMEM_FUNCTION_ATTRIBUTES void shmem_global_exit(int status);
#  endif
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
SHMEM_FUNCTION_ATTRIBUTES _Noreturn void shmem_global_exit(int status);
#else
SHMEM_FUNCTION_ATTRIBUTES void shmem_global_exit(int status);
#endif

SHMEM_FUNCTION_ATTRIBUTES int shmem_pe_accessible(int pe);
SHMEM_FUNCTION_ATTRIBUTES int shmem_addr_accessible(const void *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES void *shmem_ptr(const void *target, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_info_get_version(int *major, int *minor);
SHMEM_FUNCTION_ATTRIBUTES void shmem_info_get_name(char *name);

/* Memory Management Routines */
SHMEM_FUNCTION_ATTRIBUTES void *shmem_malloc(size_t size);
SHMEM_FUNCTION_ATTRIBUTES void *shmem_calloc(size_t count, size_t size);
SHMEM_FUNCTION_ATTRIBUTES void *shmem_align(size_t alignment, size_t size);
SHMEM_FUNCTION_ATTRIBUTES void *shmem_realloc(void *ptr, size_t size);
SHMEM_FUNCTION_ATTRIBUTES void shmem_free(void *ptr);

/* Communicatoin Management Routines */
SHMEM_FUNCTION_ATTRIBUTES int shmem_ctx_create(long options, shmem_ctx_t *ctx);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_destroy(shmem_ctx_t ctx);

/* RMA: Elemental Data Put Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_p(float *addr, float value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_p(double *addr, double value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_p(long double *addr, long double value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_char_p(char *addr, char value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_schar_p(signed char *addr, signed char value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_p(short *addr, short value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_p(int *addr, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_p(long *addr, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_p(long long *addr, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uchar_p(unsigned char *addr, unsigned char value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_p(unsigned short *addr, unsigned short value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_p(unsigned int *addr, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_p(unsigned long *addr, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_p(unsigned long long *addr, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int8_p(int8_t *addr, int8_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int16_p(int16_t *addr, int16_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_p(int32_t *addr, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_p(int64_t *addr, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint8_p(uint8_t *addr, uint8_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint16_p(uint16_t *addr, uint16_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_p(uint32_t *addr, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_p(uint64_t *addr, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_p(size_t *addr, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_p(ptrdiff_t *addr, ptrdiff_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_p(shmem_ctx_t ctx, float *addr, float value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_p(shmem_ctx_t ctx, double *addr, double value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longdouble_p(shmem_ctx_t ctx, long double *addr, long double value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_char_p(shmem_ctx_t ctx, char *addr, char value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_schar_p(shmem_ctx_t ctx, signed char *addr, signed char value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_short_p(shmem_ctx_t ctx, short *addr, short value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_p(shmem_ctx_t ctx, int *addr, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_p(shmem_ctx_t ctx, long *addr, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_p(shmem_ctx_t ctx, long long *addr, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uchar_p(shmem_ctx_t ctx, unsigned char *addr, unsigned char value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ushort_p(shmem_ctx_t ctx, unsigned short *addr, unsigned short value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_p(shmem_ctx_t ctx, unsigned int *addr, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_p(shmem_ctx_t ctx, unsigned long *addr, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_p(shmem_ctx_t ctx, unsigned long long *addr, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int8_p(shmem_ctx_t ctx, int8_t *addr, int8_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int16_p(shmem_ctx_t ctx, int16_t *addr, int16_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_p(shmem_ctx_t ctx, int32_t *addr, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_p(shmem_ctx_t ctx, int64_t *addr, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint8_p(shmem_ctx_t ctx, uint8_t *addr, uint8_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint16_p(shmem_ctx_t ctx, uint16_t *addr, uint16_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_p(shmem_ctx_t ctx, uint32_t *addr, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_p(shmem_ctx_t ctx, uint64_t *addr, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_p(shmem_ctx_t ctx, size_t *addr, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_p(shmem_ctx_t ctx, ptrdiff_t *addr, ptrdiff_t value, int pe);

/* RMA: Contiguous Data Put Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_put(float *target, const float *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_put(double *target, const double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_put(long double *target, const long double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_char_put(char *target, const char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_schar_put(signed char *target, const signed char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_put(short *target, const short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_put(int *target, const int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_put(long *target, const long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_put(long long *target, const long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uchar_put(unsigned char *target, const unsigned char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_put(unsigned short *target, const unsigned short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_put(unsigned int *target, const unsigned int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_put(unsigned long *target, const unsigned long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_put(unsigned long long *target, const unsigned long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int8_put(int8_t *target, const int8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int16_put(int16_t *target, const int16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_put(int32_t *target, const int32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_put(int64_t *target, const int64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint8_put(uint8_t *target, const uint8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint16_put(uint16_t *target, const uint16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_put(uint32_t *target, const uint32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_put(uint64_t *target, const uint64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_put(size_t *target, const size_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_put(ptrdiff_t *target, const ptrdiff_t *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_put(shmem_ctx_t ctx, float *target, const float *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_put(shmem_ctx_t ctx, double *target, const double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longdouble_put(shmem_ctx_t ctx, long double *target, const long double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_char_put(shmem_ctx_t ctx, char *target, const char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_schar_put(shmem_ctx_t ctx, signed char *target, const signed char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_short_put(shmem_ctx_t ctx, short *target, const short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_put(shmem_ctx_t ctx, int *target, const int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_put(shmem_ctx_t ctx, long *target, const long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_put(shmem_ctx_t ctx, long long *target, const long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uchar_put(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ushort_put(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_put(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_put(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_put(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int8_put(shmem_ctx_t ctx, int8_t *target, const int8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int16_put(shmem_ctx_t ctx, int16_t *target, const int16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_put(shmem_ctx_t ctx, int32_t *target, const int32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_put(shmem_ctx_t ctx, int64_t *target, const int64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint8_put(shmem_ctx_t ctx, uint8_t *target, const uint8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint16_put(shmem_ctx_t ctx, uint16_t *target, const uint16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_put(shmem_ctx_t ctx, uint32_t *target, const uint32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_put(shmem_ctx_t ctx, uint64_t *target, const uint64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_put(shmem_ctx_t ctx, size_t *target, const size_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_put(shmem_ctx_t ctx, ptrdiff_t *target, const ptrdiff_t *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_put8(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put16(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put32(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put64(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put128(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_putmem(void* target, const void *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put8(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put16(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put32(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put64(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put128(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_putmem(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);

/* RMA: Strided Put Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_iput(float *target, const float *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_iput(double *target, const double *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_iput(long double *target, const long double *source,
                           ptrdiff_t tst, ptrdiff_t sst,
                           size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_char_iput(char *target, const char *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_schar_iput(signed char *target, const signed char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_iput(short *target, const short *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_iput(int *target, const int *source,
                    ptrdiff_t tst, ptrdiff_t sst,
                    size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_iput(long *target, const long *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_iput(long long *target, const long long *source,
                         ptrdiff_t tst, ptrdiff_t sst,
                         size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uchar_iput(unsigned char *target, const unsigned char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_iput(unsigned short *target, const unsigned short *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_iput(unsigned int *target, const unsigned int *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_iput(unsigned long *target, const unsigned long *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_iput(unsigned long long *target, const unsigned long long *source,
                          ptrdiff_t tst, ptrdiff_t sst,
                          size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int8_iput(int8_t *target, const int8_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int16_iput(int16_t *target, const int16_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_iput(int32_t *target, const int32_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_iput(int64_t *target, const int64_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint8_iput(uint8_t *target, const uint8_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint16_iput(uint16_t *target, const uint16_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_iput(uint32_t *target, const uint32_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_iput(uint64_t *target, const uint64_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_iput(size_t *target, const size_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_iput(ptrdiff_t *target, const ptrdiff_t *source,
                        ptrdiff_t tst, ptrdiff_t sst,
                        size_t len, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_iput(shmem_ctx_t ctx, float *target, const float *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_iput(shmem_ctx_t ctx, double *target, const double *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longdouble_iput(shmem_ctx_t ctx, long double *target, const long double *source,
                           ptrdiff_t tst, ptrdiff_t sst,
                           size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_char_iput(shmem_ctx_t ctx, char *target, const char *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_schar_iput(shmem_ctx_t ctx, signed char *target, const signed char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_short_iput(shmem_ctx_t ctx, short *target, const short *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_iput(shmem_ctx_t ctx, int *target, const int *source,
                    ptrdiff_t tst, ptrdiff_t sst,
                    size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_iput(shmem_ctx_t ctx, long *target, const long *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_iput(shmem_ctx_t ctx, long long *target, const long long *source,
                         ptrdiff_t tst, ptrdiff_t sst,
                         size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uchar_iput(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ushort_iput(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_iput(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_iput(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_iput(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source,
                          ptrdiff_t tst, ptrdiff_t sst,
                          size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int8_iput(shmem_ctx_t ctx, int8_t *target, const int8_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int16_iput(shmem_ctx_t ctx, int16_t *target, const int16_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_iput(shmem_ctx_t ctx, int32_t *target, const int32_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_iput(shmem_ctx_t ctx, int64_t *target, const int64_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint8_iput(shmem_ctx_t ctx, uint8_t *target, const uint8_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint16_iput(shmem_ctx_t ctx, uint16_t *target, const uint16_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_iput(shmem_ctx_t ctx, uint32_t *target, const uint32_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_iput(shmem_ctx_t ctx, uint64_t *target, const uint64_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_iput(shmem_ctx_t ctx, size_t *target, const size_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t len, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_iput(shmem_ctx_t ctx, ptrdiff_t *target, const ptrdiff_t *source,
                        ptrdiff_t tst, ptrdiff_t sst,
                        size_t len, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_iput8(void *target, const void *source,
                 ptrdiff_t tst, ptrdiff_t sst, size_t len,
                 int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iput16(void *target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst, size_t len,
                  int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iput32(void *target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst, size_t len,
                  int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iput64(void *target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst, size_t len,
                  int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iput128(void *target, const void *source,
                   ptrdiff_t tst, ptrdiff_t sst, size_t len,
                   int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iput8(shmem_ctx_t ctx, void *target, const void *source,
                 ptrdiff_t tst, ptrdiff_t sst, size_t len,
                 int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iput16(shmem_ctx_t ctx, void *target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst, size_t len,
                  int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iput32(shmem_ctx_t ctx, void *target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst, size_t len,
                  int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iput64(shmem_ctx_t ctx, void *target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst, size_t len,
                  int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iput128(shmem_ctx_t ctx, void *target, const void *source,
                   ptrdiff_t tst, ptrdiff_t sst, size_t len,
                   int pe);

/* RMA: Elemental Data Get Routines */
SHMEM_FUNCTION_ATTRIBUTES float shmem_float_g(const float *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES double shmem_double_g(const double *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES long double shmem_longdouble_g(const long double *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES char shmem_char_g(const char *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES signed char shmem_schar_g(const signed char *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES short shmem_short_g(const short *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int shmem_int_g(const int *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_g(const long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_g(const long long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned char shmem_uchar_g(const unsigned char *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned short shmem_ushort_g(const unsigned short *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_g(const unsigned int *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_g(const unsigned long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_g(const unsigned long long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int8_t shmem_int8_g(const int8_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int16_t shmem_int16_g(const int16_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_g(const int32_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_g(const int64_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint8_t shmem_uint8_g(const uint8_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint16_t shmem_uint16_g(const uint16_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_g(const uint32_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_g(const uint64_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_g(const size_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_g(const ptrdiff_t *addr, int pe);

SHMEM_FUNCTION_ATTRIBUTES float shmem_ctx_float_g(shmem_ctx_t ctx, const float *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES double shmem_ctx_double_g(shmem_ctx_t ctx, const double *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES long double shmem_ctx_longdouble_g(shmem_ctx_t ctx, const long double *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES char shmem_ctx_char_g(shmem_ctx_t ctx, const char *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES signed char shmem_ctx_schar_g(shmem_ctx_t ctx, const signed char *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES short shmem_ctx_short_g(shmem_ctx_t ctx, const short *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int shmem_ctx_int_g(shmem_ctx_t ctx, const int *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_ctx_long_g(shmem_ctx_t ctx, const long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_ctx_longlong_g(shmem_ctx_t ctx, const long long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned char shmem_ctx_uchar_g(shmem_ctx_t ctx, const unsigned char *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned short shmem_ctx_ushort_g(shmem_ctx_t ctx, const unsigned short *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_g(shmem_ctx_t ctx, const unsigned int *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_g(shmem_ctx_t ctx, const unsigned long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_g(shmem_ctx_t ctx, const unsigned long long *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int8_t shmem_ctx_int8_g(shmem_ctx_t ctx, const int8_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int16_t shmem_ctx_int16_g(shmem_ctx_t ctx, const int16_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_g(shmem_ctx_t ctx, const int32_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_g(shmem_ctx_t ctx, const int64_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint8_t shmem_ctx_uint8_g(shmem_ctx_t ctx, const uint8_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint16_t shmem_ctx_uint16_g(shmem_ctx_t ctx, const uint16_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_g(shmem_ctx_t ctx, const uint32_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_g(shmem_ctx_t ctx, const uint64_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_ctx_size_g(shmem_ctx_t ctx, const size_t *addr, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ctx_ptrdiff_g(shmem_ctx_t ctx, const ptrdiff_t *addr, int pe);

/* RMA: Contiguous Data Get Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_get(float *target, const float *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_get(double *target, const double *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_get(long double *target, const long double *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_char_get(char *target, const char *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_schar_get(signed char *target, const signed char *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_get(short *target, const short *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_get(int *target, const int *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_get(long *target, const long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_get(long long *target, const long long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uchar_get(unsigned char *target, const unsigned char *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_get(unsigned short *target, const unsigned short *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_get(unsigned int *target, const unsigned int *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_get(unsigned long *target, const unsigned long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_get(unsigned long long *target, const unsigned long long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int8_get(int8_t *target, const int8_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int16_get(int16_t *target, const int16_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_get(int32_t *target, const int32_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_get(int64_t *target, const int64_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint8_get(uint8_t *target, const uint8_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint16_get(uint16_t *target, const uint16_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_get(uint32_t *target, const uint32_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_get(uint64_t *target, const uint64_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_get(size_t *target, const size_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_get(ptrdiff_t *target, const ptrdiff_t *source, size_t nelems,int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_get(shmem_ctx_t ctx, float *target, const float *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_get(shmem_ctx_t ctx, double *target, const double *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longdouble_get(shmem_ctx_t ctx, long double *target, const long double *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_char_get(shmem_ctx_t ctx, char *target, const char *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_schar_get(shmem_ctx_t ctx, signed char *target, const signed char *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_short_get(shmem_ctx_t ctx, short *target, const short *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_get(shmem_ctx_t ctx, int *target, const int *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_get(shmem_ctx_t ctx, long *target, const long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_get(shmem_ctx_t ctx, long long *target, const long long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uchar_get(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ushort_get(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_get(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_get(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_get(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int8_get(shmem_ctx_t ctx, int8_t *target, const int8_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int16_get(shmem_ctx_t ctx, int16_t *target, const int16_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_get(shmem_ctx_t ctx, int32_t *target, const int32_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_get(shmem_ctx_t ctx, int64_t *target, const int64_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint8_get(shmem_ctx_t ctx, uint8_t *target, const uint8_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint16_get(shmem_ctx_t ctx, uint16_t *target, const uint16_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_get(shmem_ctx_t ctx, uint32_t *target, const uint32_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_get(shmem_ctx_t ctx, uint64_t *target, const uint64_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_get(shmem_ctx_t ctx, size_t *target, const size_t *source, size_t nelems,int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_get(shmem_ctx_t ctx, ptrdiff_t *target, const ptrdiff_t *source, size_t nelems,int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_get8(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get16(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get32(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get64(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get128(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_getmem(void* target, const void *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get8(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get16(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get32(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get64(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get128(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_getmem(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);

/* RMA: Strided Get Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_iget(float *target, const float *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_iget(double *target, const double *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_iget(long double *target, const long double *source,
                           ptrdiff_t tst, ptrdiff_t sst,
                           size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_char_iget(char *target, const char *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_schar_iget(signed char *target, const signed char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_iget(short *target, const short *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_iget(int *target, const int *source,
                    ptrdiff_t tst, ptrdiff_t sst,
                    size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_iget(long *target, const long *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_iget(long long *target, const long long *source,
                         ptrdiff_t tst, ptrdiff_t sst,
                         size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uchar_iget(unsigned char *target, const unsigned char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_iget(unsigned short *target, const unsigned short *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_iget(unsigned int *target, const unsigned int *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_iget(unsigned long *target, const unsigned long *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_iget(unsigned long long *target, const unsigned long long *source,
                          ptrdiff_t tst, ptrdiff_t sst,
                          size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int8_iget(int8_t *target, const int8_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int16_iget(int16_t *target, const int16_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_iget(int32_t *target, const int32_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_iget(int64_t *target, const int64_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint8_iget(uint8_t *target, const uint8_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint16_iget(uint16_t *target, const uint16_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_iget(uint32_t *target, const uint32_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_iget(uint64_t *target, const uint64_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_iget(size_t *target, const size_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_iget(ptrdiff_t *target, const ptrdiff_t *source,
                        ptrdiff_t tst, ptrdiff_t sst,
                        size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_iget(shmem_ctx_t ctx, float *target, const float *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_iget(shmem_ctx_t ctx, double *target, const double *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longdouble_iget(shmem_ctx_t ctx, long double *target, const long double *source,
                           ptrdiff_t tst, ptrdiff_t sst,
                           size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_char_iget(shmem_ctx_t ctx, char *target, const char *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_schar_iget(shmem_ctx_t ctx, signed char *target, const signed char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_short_iget(shmem_ctx_t ctx, short *target, const short *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_iget(shmem_ctx_t ctx, int *target, const int *source,
                    ptrdiff_t tst, ptrdiff_t sst,
                    size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_iget(shmem_ctx_t ctx, long *target, const long *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_iget(shmem_ctx_t ctx, long long *target, const long long *source,
                         ptrdiff_t tst, ptrdiff_t sst,
                         size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uchar_iget(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ushort_iget(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_iget(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_iget(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_iget(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source,
                          ptrdiff_t tst, ptrdiff_t sst,
                          size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int8_iget(shmem_ctx_t ctx, int8_t *target, const int8_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int16_iget(shmem_ctx_t ctx, int16_t *target, const int16_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_iget(shmem_ctx_t ctx, int32_t *target, const int32_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_iget(shmem_ctx_t ctx, int64_t *target, const int64_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint8_iget(shmem_ctx_t ctx, uint8_t *target, const uint8_t *source,
                      ptrdiff_t tst, ptrdiff_t sst,
                      size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint16_iget(shmem_ctx_t ctx, uint16_t *target, const uint16_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_iget(shmem_ctx_t ctx, uint32_t *target, const uint32_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_iget(shmem_ctx_t ctx, uint64_t *target, const uint64_t *source,
                       ptrdiff_t tst, ptrdiff_t sst,
                       size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_iget(shmem_ctx_t ctx, size_t *target, const size_t *source,
                     ptrdiff_t tst, ptrdiff_t sst,
                     size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_iget(shmem_ctx_t ctx, ptrdiff_t *target, const ptrdiff_t *source,
                        ptrdiff_t tst, ptrdiff_t sst,
                        size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_iget8(void* target, const void *source,
                 ptrdiff_t tst, ptrdiff_t sst,
                 size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iget16(void* target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst,
                  size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iget32(void* target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst,
                  size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iget64(void* target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst,
                  size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_iget128(void* target, const void *source,
                   ptrdiff_t tst, ptrdiff_t sst,
                   size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iget8(shmem_ctx_t ctx, void* target, const void *source,
                 ptrdiff_t tst, ptrdiff_t sst,
                 size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iget16(shmem_ctx_t ctx, void* target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst,
                  size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iget32(shmem_ctx_t ctx, void* target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst,
                  size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iget64(shmem_ctx_t ctx, void* target, const void *source,
                  ptrdiff_t tst, ptrdiff_t sst,
                  size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_iget128(shmem_ctx_t ctx, void* target, const void *source,
                   ptrdiff_t tst, ptrdiff_t sst,
                   size_t nelems, int pe);

/* RMA: Nonblocking Contiguous Data Put Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_put_nbi(float *target, const float *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_put_nbi(double *target, const double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_put_nbi(long double *target, const long double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_char_put_nbi(char *target, const char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_schar_put_nbi(signed char *target, const signed char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_put_nbi(short *target, const short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_put_nbi(int *target, const int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_put_nbi(long *target, const long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_put_nbi(long long *target, const long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uchar_put_nbi(unsigned char *target, const unsigned char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_put_nbi(unsigned short *target, const unsigned short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_put_nbi(unsigned int *target, const unsigned int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_put_nbi(unsigned long *target, const unsigned long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_put_nbi(unsigned long long *target, const unsigned long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int8_put_nbi(int8_t *target, const int8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int16_put_nbi(int16_t *target, const int16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_put_nbi(int32_t *target, const int32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_put_nbi(int64_t *target, const int64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint8_put_nbi(uint8_t *target, const uint8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint16_put_nbi(uint16_t *target, const uint16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_put_nbi(uint32_t *target, const uint32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_put_nbi(uint64_t *target, const uint64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_put_nbi(size_t *target, const size_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_put_nbi(ptrdiff_t *target, const ptrdiff_t *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_put_nbi(shmem_ctx_t ctx, float *target, const float *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_put_nbi(shmem_ctx_t ctx, double *target, const double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longdouble_put_nbi(shmem_ctx_t ctx, long double *target, const long double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_char_put_nbi(shmem_ctx_t ctx, char *target, const char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_schar_put_nbi(shmem_ctx_t ctx, signed char *target, const signed char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_short_put_nbi(shmem_ctx_t ctx, short *target, const short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_put_nbi(shmem_ctx_t ctx, int *target, const int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_put_nbi(shmem_ctx_t ctx, long *target, const long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_put_nbi(shmem_ctx_t ctx, long long *target, const long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uchar_put_nbi(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ushort_put_nbi(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_put_nbi(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_put_nbi(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_put_nbi(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int8_put_nbi(shmem_ctx_t ctx, int8_t *target, const int8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int16_put_nbi(shmem_ctx_t ctx, int16_t *target, const int16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_put_nbi(shmem_ctx_t ctx, int32_t *target, const int32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_put_nbi(shmem_ctx_t ctx, int64_t *target, const int64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint8_put_nbi(shmem_ctx_t ctx, uint8_t *target, const uint8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint16_put_nbi(shmem_ctx_t ctx, uint16_t *target, const uint16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_put_nbi(shmem_ctx_t ctx, uint32_t *target, const uint32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_put_nbi(shmem_ctx_t ctx, uint64_t *target, const uint64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_put_nbi(shmem_ctx_t ctx, size_t *target, const size_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_put_nbi(shmem_ctx_t ctx, ptrdiff_t *target, const ptrdiff_t *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_put8_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put16_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put32_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put64_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_put128_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_putmem_nbi(void* target, const void *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put8_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put16_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put32_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put64_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_put128_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_putmem_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);

/* RMA: Nonblocking Contiguous Data Get Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_get_nbi(float *target, const float *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_get_nbi(double *target, const double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_get_nbi(long double *target, const long double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_char_get_nbi(char *target, const char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_schar_get_nbi(signed char *target, const signed char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_get_nbi(short *target, const short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_get_nbi(int *target, const int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_get_nbi(long *target, const long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_get_nbi(long long *target, const long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uchar_get_nbi(unsigned char *target, const unsigned char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_get_nbi(unsigned short *target, const unsigned short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_get_nbi(unsigned int *target, const unsigned int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_get_nbi(unsigned long *target, const unsigned long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_get_nbi(unsigned long long *target, const unsigned long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int8_get_nbi(int8_t *target, const int8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int16_get_nbi(int16_t *target, const int16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_get_nbi(int32_t *target, const int32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_get_nbi(int64_t *target, const int64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint8_get_nbi(uint8_t *target, const uint8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint16_get_nbi(uint16_t *target, const uint16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_get_nbi(uint32_t *target, const uint32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_get_nbi(uint64_t *target, const uint64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_get_nbi(size_t *target, const size_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_get_nbi(ptrdiff_t *target, const ptrdiff_t *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_get_nbi(shmem_ctx_t ctx, float *target, const float *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_get_nbi(shmem_ctx_t ctx, double *target, const double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longdouble_get_nbi(shmem_ctx_t ctx, long double *target, const long double *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_char_get_nbi(shmem_ctx_t ctx, char *target, const char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_schar_get_nbi(shmem_ctx_t ctx, signed char *target, const signed char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_short_get_nbi(shmem_ctx_t ctx, short *target, const short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_get_nbi(shmem_ctx_t ctx, int *target, const int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_get_nbi(shmem_ctx_t ctx, long *target, const long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_get_nbi(shmem_ctx_t ctx, long long *target, const long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uchar_get_nbi(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ushort_get_nbi(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_get_nbi(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_get_nbi(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_get_nbi(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int8_get_nbi(shmem_ctx_t ctx, int8_t *target, const int8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int16_get_nbi(shmem_ctx_t ctx, int16_t *target, const int16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_get_nbi(shmem_ctx_t ctx, int32_t *target, const int32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_get_nbi(shmem_ctx_t ctx, int64_t *target, const int64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint8_get_nbi(shmem_ctx_t ctx, uint8_t *target, const uint8_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint16_get_nbi(shmem_ctx_t ctx, uint16_t *target, const uint16_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_get_nbi(shmem_ctx_t ctx, uint32_t *target, const uint32_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_get_nbi(shmem_ctx_t ctx, uint64_t *target, const uint64_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_get_nbi(shmem_ctx_t ctx, size_t *target, const size_t *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_get_nbi(shmem_ctx_t ctx, ptrdiff_t *target, const ptrdiff_t *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_get8_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get16_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get32_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get64_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_get128_nbi(void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_getmem_nbi(void* target, const void *source, size_t nelems, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get8_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get16_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get32_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get64_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_get128_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_getmem_nbi(shmem_ctx_t ctx, void* target, const void *source, size_t nelems, int pe);

/* AMO: Atomic Swap Routines */
SHMEM_FUNCTION_ATTRIBUTES int shmem_int_swap(int *target, int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_swap(long *target, long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_swap(long long *target, long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_swap(unsigned int *target, unsigned int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_swap(unsigned long *target, unsigned long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_swap(unsigned long long *target, unsigned long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_swap(int32_t *target, int32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_swap(int64_t *target, int64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_swap(uint32_t *target, uint32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_swap(uint64_t *target, uint64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_swap(size_t *target, size_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_swap(ptrdiff_t *target, ptrdiff_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES float shmem_float_swap(float *target, float value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES double shmem_double_swap(double *target, double value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES int shmem_int_atomic_swap(int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_atomic_swap(long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_atomic_swap(long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_swap(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_swap(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_swap(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_swap(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_swap(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_swap(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_swap(uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_atomic_swap(size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_atomic_swap(ptrdiff_t *target, ptrdiff_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES float shmem_float_atomic_swap(float *target, float value, int pe);
SHMEM_FUNCTION_ATTRIBUTES double shmem_double_atomic_swap(double *target, double value, int pe);

SHMEM_FUNCTION_ATTRIBUTES int shmem_ctx_int_atomic_swap(shmem_ctx_t ctx, int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_ctx_long_atomic_swap(shmem_ctx_t ctx, long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_ctx_longlong_atomic_swap(shmem_ctx_t ctx, long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_swap(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_swap(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_swap(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_swap(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_swap(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_swap(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_swap(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_ctx_size_atomic_swap(shmem_ctx_t ctx, size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ctx_ptrdiff_atomic_swap(shmem_ctx_t ctx, ptrdiff_t *target, ptrdiff_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES float shmem_ctx_float_atomic_swap(shmem_ctx_t ctx, float *target, float value, int pe);
SHMEM_FUNCTION_ATTRIBUTES double shmem_ctx_double_atomic_swap(shmem_ctx_t ctx, double *target, double value, int pe);

/* Special case, only enabled when C++ and C11 bindings are disabled */
#if ( !defined(__cplusplus) && \
      !(defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) ) || \
    defined(SHMEM_INTERNAL_INCLUDE) || defined(SHMEM_DECLARE_SPECIAL_CASES)
SHMEM_FUNCTION_ATTRIBUTES long shmem_swap(long *target, long value, int pe);
#endif

/* AMO: Atomic Conditional Swap Routines */
SHMEM_FUNCTION_ATTRIBUTES int shmem_int_cswap(int *target, int cond, int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_cswap(long *target, long cond, long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_cswap(long long *target, long long cond, long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_cswap(unsigned int *target, unsigned int cond, unsigned int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_cswap(unsigned long *target, unsigned long cond, unsigned long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_cswap(unsigned long long *target, unsigned long long cond, unsigned long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_cswap(int32_t *target, int32_t cond, int32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_cswap(int64_t *target, int64_t cond, int64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_cswap(uint32_t *target, uint32_t cond, uint32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_cswap(uint64_t *target, uint64_t cond, uint64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_cswap(size_t *target, size_t cond, size_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_cswap(ptrdiff_t *target, ptrdiff_t cond, ptrdiff_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES int shmem_int_atomic_compare_swap(int *target, int cond, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_atomic_compare_swap(long *target, long cond, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_atomic_compare_swap(long long *target, long long cond, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_compare_swap(unsigned int *target, unsigned int cond, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_compare_swap(unsigned long *target, unsigned long cond, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_compare_swap(unsigned long long *target, unsigned long long cond, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_compare_swap(int32_t *target, int32_t cond, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_compare_swap(int64_t *target, int64_t cond, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_compare_swap(uint32_t *target, uint32_t cond, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_compare_swap(uint64_t *target, uint64_t cond, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_atomic_compare_swap(size_t *target, size_t cond, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_atomic_compare_swap(ptrdiff_t *target, ptrdiff_t cond, ptrdiff_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES int shmem_ctx_int_atomic_compare_swap(shmem_ctx_t ctx, int *target, int cond, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_ctx_long_atomic_compare_swap(shmem_ctx_t ctx, long *target, long cond, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_ctx_longlong_atomic_compare_swap(shmem_ctx_t ctx, long long *target, long long cond, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_compare_swap(shmem_ctx_t ctx, unsigned int *target, unsigned int cond, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_compare_swap(shmem_ctx_t ctx, unsigned long *target, unsigned long cond, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_compare_swap(shmem_ctx_t ctx, unsigned long long *target, unsigned long long cond, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_compare_swap(shmem_ctx_t ctx, int32_t *target, int32_t cond, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_compare_swap(shmem_ctx_t ctx, int64_t *target, int64_t cond, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_compare_swap(shmem_ctx_t ctx, uint32_t *target, uint32_t cond, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_compare_swap(shmem_ctx_t ctx, uint64_t *target, uint64_t cond, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_ctx_size_atomic_compare_swap(shmem_ctx_t ctx, size_t *target, size_t cond, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ctx_ptrdiff_atomic_compare_swap(shmem_ctx_t ctx, ptrdiff_t *target, ptrdiff_t cond, ptrdiff_t value, int pe);

/* AMO: Atomic Fetch-and-Add Routines */
SHMEM_FUNCTION_ATTRIBUTES int shmem_int_fadd(int *target, int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_fadd(long *target, long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_fadd(long long *target, long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_fadd(unsigned int *target, unsigned int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_fadd(unsigned long *target, unsigned long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_fadd(unsigned long long *target, unsigned long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_fadd(int32_t *target, int32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_fadd(int64_t *target, int64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_fadd(uint32_t *target, uint32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_fadd(uint64_t *target, uint64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_fadd(size_t *target, size_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_fadd(ptrdiff_t *target, ptrdiff_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES int shmem_int_atomic_fetch_add(int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_atomic_fetch_add(long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_atomic_fetch_add(long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_fetch_add(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_fetch_add(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_fetch_add(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_fetch_add(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_fetch_add(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_fetch_add(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_fetch_add(uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_atomic_fetch_add(size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_atomic_fetch_add(ptrdiff_t *target, ptrdiff_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES int shmem_ctx_int_atomic_fetch_add(shmem_ctx_t ctx, int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_ctx_long_atomic_fetch_add(shmem_ctx_t ctx, long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_ctx_longlong_atomic_fetch_add(shmem_ctx_t ctx, long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_fetch_add(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_fetch_add(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_fetch_add(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_fetch_add(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_fetch_add(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_fetch_add(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_fetch_add(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_ctx_size_atomic_fetch_add(shmem_ctx_t ctx, size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ctx_ptrdiff_atomic_fetch_add(shmem_ctx_t ctx, ptrdiff_t *target, ptrdiff_t value, int pe);

/* AMO: Atomic Fetch-and-Increment Routines */
SHMEM_FUNCTION_ATTRIBUTES int shmem_int_finc(int *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_finc(long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_finc(long long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_finc(unsigned int *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_finc(unsigned long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_finc(unsigned long long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_finc(int32_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_finc(int64_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_finc(uint32_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_finc(uint64_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_finc(size_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_finc(ptrdiff_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES int shmem_int_atomic_fetch_inc(int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_atomic_fetch_inc(long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_atomic_fetch_inc(long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_fetch_inc(unsigned int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_fetch_inc(unsigned long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_fetch_inc(unsigned long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_fetch_inc(int32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_fetch_inc(int64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_fetch_inc(uint32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_fetch_inc(uint64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_atomic_fetch_inc(size_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_atomic_fetch_inc(ptrdiff_t *target, int pe);

SHMEM_FUNCTION_ATTRIBUTES int shmem_ctx_int_atomic_fetch_inc(shmem_ctx_t ctx, int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_ctx_long_atomic_fetch_inc(shmem_ctx_t ctx, long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_ctx_longlong_atomic_fetch_inc(shmem_ctx_t ctx, long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_fetch_inc(shmem_ctx_t ctx, unsigned int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_fetch_inc(shmem_ctx_t ctx, unsigned long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_fetch_inc(shmem_ctx_t ctx, unsigned long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_fetch_inc(shmem_ctx_t ctx, int32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_fetch_inc(shmem_ctx_t ctx, int64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_fetch_inc(shmem_ctx_t ctx, uint32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_fetch_inc(shmem_ctx_t ctx, uint64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_ctx_size_atomic_fetch_inc(shmem_ctx_t ctx, size_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ctx_ptrdiff_atomic_fetch_inc(shmem_ctx_t ctx, ptrdiff_t *target, int pe);

/* AMO: Atomic Add Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_add(int *target, int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_add(long *target, long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_add(long long *target, long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_add(unsigned int *target, unsigned int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_add(unsigned long *target, unsigned long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_add(unsigned long long *target, unsigned long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_add(int32_t *target, int32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_add(int64_t *target, int64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_add(uint32_t *target, uint32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_add(uint64_t *target, uint64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_add(size_t *target, size_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_add(ptrdiff_t *target, ptrdiff_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES void shmem_int_atomic_add(int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_atomic_add(long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_atomic_add(long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_atomic_add(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_atomic_add(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_atomic_add(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_atomic_add(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_atomic_add(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_atomic_add(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_atomic_add(uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_atomic_add(size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_atomic_add(ptrdiff_t *target, ptrdiff_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_atomic_add(shmem_ctx_t ctx, int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_atomic_add(shmem_ctx_t ctx, long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_atomic_add(shmem_ctx_t ctx, long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_atomic_add(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_atomic_add(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_atomic_add(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_atomic_add(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_atomic_add(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_atomic_add(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_atomic_add(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_atomic_add(shmem_ctx_t ctx, size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_atomic_add(shmem_ctx_t ctx, ptrdiff_t *target, ptrdiff_t value, int pe);

/* AMO: Atomic Increment Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_inc(int *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_inc(long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_inc(long long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_inc(unsigned int *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_inc(unsigned long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_inc(unsigned long long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_inc(int32_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_inc(int64_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_inc(uint32_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_inc(uint64_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_inc(size_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_inc(ptrdiff_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES void shmem_int_atomic_inc(int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_atomic_inc(long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_atomic_inc(long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_atomic_inc(unsigned int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_atomic_inc(unsigned long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_atomic_inc(unsigned long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_atomic_inc(int32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_atomic_inc(int64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_atomic_inc(uint32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_atomic_inc(uint64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_atomic_inc(size_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_atomic_inc(ptrdiff_t *target, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_atomic_inc(shmem_ctx_t ctx, int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_atomic_inc(shmem_ctx_t ctx, long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_atomic_inc(shmem_ctx_t ctx, long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_atomic_inc(shmem_ctx_t ctx, unsigned int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_atomic_inc(shmem_ctx_t ctx, unsigned long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_atomic_inc(shmem_ctx_t ctx, unsigned long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_atomic_inc(shmem_ctx_t ctx, int32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_atomic_inc(shmem_ctx_t ctx, int64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_atomic_inc(shmem_ctx_t ctx, uint32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_atomic_inc(shmem_ctx_t ctx, uint64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_atomic_inc(shmem_ctx_t ctx, size_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_atomic_inc(shmem_ctx_t ctx, ptrdiff_t *target, int pe);

/* AMO: Atomic Fetch Routines */
SHMEM_FUNCTION_ATTRIBUTES int shmem_int_fetch(const int *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_fetch(const long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_fetch(const long long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_fetch(const unsigned int *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_fetch(const unsigned long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_fetch(const unsigned long long *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_fetch(const int32_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_fetch(const int64_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_fetch(const uint32_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_fetch(const uint64_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_fetch(const size_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_fetch(const ptrdiff_t *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES float shmem_float_fetch(const float *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES double shmem_double_fetch(const double *target, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES int shmem_int_atomic_fetch(const int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_long_atomic_fetch(const long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_longlong_atomic_fetch(const long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_fetch(const unsigned int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_fetch(const unsigned long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_fetch(const unsigned long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_fetch(const int32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_fetch(const int64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_fetch(const uint32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_fetch(const uint64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_size_atomic_fetch(const size_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ptrdiff_atomic_fetch(const ptrdiff_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES float shmem_float_atomic_fetch(const float *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES double shmem_double_atomic_fetch(const double *target, int pe);

SHMEM_FUNCTION_ATTRIBUTES int shmem_ctx_int_atomic_fetch(shmem_ctx_t ctx, const int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long shmem_ctx_long_atomic_fetch(shmem_ctx_t ctx, const long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES long long shmem_ctx_longlong_atomic_fetch(shmem_ctx_t ctx, const long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_fetch(shmem_ctx_t ctx, const unsigned int *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_fetch(shmem_ctx_t ctx, const unsigned long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_fetch(shmem_ctx_t ctx, const unsigned long long *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_fetch(shmem_ctx_t ctx, const int32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_fetch(shmem_ctx_t ctx, const int64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_fetch(shmem_ctx_t ctx, const uint32_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_fetch(shmem_ctx_t ctx, const uint64_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES size_t shmem_ctx_size_atomic_fetch(shmem_ctx_t ctx, const size_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES ptrdiff_t shmem_ctx_ptrdiff_atomic_fetch(shmem_ctx_t ctx, const ptrdiff_t *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES float shmem_ctx_float_atomic_fetch(shmem_ctx_t ctx, const float *target, int pe);
SHMEM_FUNCTION_ATTRIBUTES double shmem_ctx_double_atomic_fetch(shmem_ctx_t ctx, const double *target, int pe);

/* AMO: Atomic Set Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_set(int *target, int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_set(long *target, long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_set(long long *target, long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_set(unsigned int *target, unsigned int value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_set(unsigned long *target, unsigned long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_set(unsigned long long *target, unsigned long long value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_set(int32_t *target, int32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_set(int64_t *target, int64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_set(uint32_t *target, uint32_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_set(uint64_t *target, uint64_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_set(size_t *target, size_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_set(ptrdiff_t *target, ptrdiff_t value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_set(float *target, float value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_set(double *target, double value, int pe) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES void shmem_int_atomic_set(int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_atomic_set(long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_atomic_set(long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_atomic_set(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_atomic_set(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_atomic_set(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_atomic_set(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_atomic_set(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_atomic_set(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_atomic_set(uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_atomic_set(size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_atomic_set(ptrdiff_t *target, ptrdiff_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_atomic_set(float *target, float value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_atomic_set(double *target, double value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int_atomic_set(shmem_ctx_t ctx, int *target, int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_long_atomic_set(shmem_ctx_t ctx, long *target, long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_longlong_atomic_set(shmem_ctx_t ctx, long long *target, long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_atomic_set(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_atomic_set(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_atomic_set(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_atomic_set(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_atomic_set(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_atomic_set(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_atomic_set(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_size_atomic_set(shmem_ctx_t ctx, size_t *target, size_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ptrdiff_atomic_set(shmem_ctx_t ctx, ptrdiff_t *target, ptrdiff_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_float_atomic_set(shmem_ctx_t ctx, float *target, float value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_double_atomic_set(shmem_ctx_t ctx, double *target, double value, int pe);

/* AMO: Atomic Bitwise Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_atomic_xor(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_atomic_xor(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_atomic_xor(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_atomic_xor(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_atomic_xor(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_atomic_xor(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_atomic_xor(uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_atomic_xor(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_atomic_xor(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_atomic_xor(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_atomic_xor(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_atomic_xor(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_atomic_xor(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_atomic_xor(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_atomic_and(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_atomic_and(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_atomic_and(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_atomic_and(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_atomic_and(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_atomic_and(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_atomic_and(uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_atomic_and(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_atomic_and(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_atomic_and(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_atomic_and(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_atomic_and(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_atomic_and(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_atomic_and(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_atomic_or(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_atomic_or(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_atomic_or(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_atomic_or(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_atomic_or(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_atomic_or(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_atomic_or(uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint_atomic_or(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulong_atomic_or(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_ulonglong_atomic_or(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int32_atomic_or(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_int64_atomic_or(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint32_atomic_or(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_uint64_atomic_or(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);

/* AMO: Fetching atomic Bitwise Routines */
SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_fetch_xor(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_fetch_xor(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_fetch_xor(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_fetch_xor(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_fetch_xor(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_fetch_xor(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_fetch_xor(uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_fetch_xor(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_fetch_xor(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_fetch_xor(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_fetch_xor(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_fetch_xor(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_fetch_xor(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_fetch_xor(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_fetch_and(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_fetch_and(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_fetch_and(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_fetch_and(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_fetch_and(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_fetch_and(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_fetch_and(uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_fetch_and(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_fetch_and(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_fetch_and(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_fetch_and(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_fetch_and(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_fetch_and(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_fetch_and(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_uint_atomic_fetch_or(unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ulong_atomic_fetch_or(unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ulonglong_atomic_fetch_or(unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_int32_atomic_fetch_or(int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_int64_atomic_fetch_or(int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_uint32_atomic_fetch_or(uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_uint64_atomic_fetch_or(uint64_t *target, uint64_t value, int pe);

SHMEM_FUNCTION_ATTRIBUTES unsigned int shmem_ctx_uint_atomic_fetch_or(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long shmem_ctx_ulong_atomic_fetch_or(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES unsigned long long shmem_ctx_ulonglong_atomic_fetch_or(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int32_t shmem_ctx_int32_atomic_fetch_or(shmem_ctx_t ctx, int32_t *target, int32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES int64_t shmem_ctx_int64_atomic_fetch_or(shmem_ctx_t ctx, int64_t *target, int64_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint32_t shmem_ctx_uint32_atomic_fetch_or(shmem_ctx_t ctx, uint32_t *target, uint32_t value, int pe);
SHMEM_FUNCTION_ATTRIBUTES uint64_t shmem_ctx_uint64_atomic_fetch_or(shmem_ctx_t ctx, uint64_t *target, uint64_t value, int pe);

/* COLL: Barrier Synchronization Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_barrier(int PE_start, int logPE_stride, int PE_size, long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_barrier_all(void);
SHMEM_FUNCTION_ATTRIBUTES void shmem_sync(int PE_start, int logPE_stride, int PE_size, long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_sync_all(void);

/* COLL: Reduction Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_and_to_all(short *target,
                            const short *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, short *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_and_to_all(int *target,
                          const int *source, int nreduce,
                          int PE_start, int logPE_stride,
                          int PE_size, int *pWrk,
                          long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_and_to_all(long *target,
                           const long *source, int nreduce,
                           int PE_start, int logPE_stride,
                           int PE_size, long *pWrk,
                           long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_and_to_all(long long *target,
                               const long long *source, int nreduce,
                               int PE_start, int logPE_stride,
                               int PE_size, long long *pWrk,
                               long *pSync);

SHMEM_FUNCTION_ATTRIBUTES void shmem_short_or_to_all(short *target,
                           const short *source, int nreduce,
                           int PE_start, int logPE_stride,
                           int PE_size, short *pWrk,
                           long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_or_to_all(int *target,
                         const int *source, int nreduce,
                         int PE_start, int logPE_stride,
                         int PE_size, int *pWrk,
                         long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_or_to_all(long *target,
                          const long *source, int nreduce,
                          int PE_start, int logPE_stride,
                          int PE_size, long *pWrk,
                          long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_or_to_all(long long *target,
                              const long long *source, int nreduce,
                              int PE_start, int logPE_stride,
                              int PE_size, long long *pWrk,
                              long *pSync);

SHMEM_FUNCTION_ATTRIBUTES void shmem_short_xor_to_all(short *target,
                            const short *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, short *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_xor_to_all(int *target,
                          const int *source, int nreduce,
                          int PE_start, int logPE_stride,
                          int PE_size, int *pWrk,
                          long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_xor_to_all(long *target,
                           const long *source, int nreduce,
                           int PE_start, int logPE_stride,
                           int PE_size, long *pWrk,
                           long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_xor_to_all(long long *target,
                               const long long *source, int nreduce,
                               int PE_start, int logPE_stride,
                               int PE_size, long long *pWrk,
                               long *pSync);

SHMEM_FUNCTION_ATTRIBUTES void shmem_short_min_to_all(short *target,
                            const short *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, short *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_min_to_all(int *target,
                          const int *source, int nreduce,
                          int PE_start, int logPE_stride,
                          int PE_size, int *pWrk,
                          long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_min_to_all(long *target,
                           const long *source, int nreduce,
                           int PE_start, int logPE_stride,
                           int PE_size, long *pWrk,
                           long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_min_to_all(long long *target,
                               const long long *source, int nreduce,
                               int PE_start, int logPE_stride,
                               int PE_size, long long *pWrk,
                               long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_min_to_all(float *target,
                            const float *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, float *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_min_to_all(double *target,
                             const double *source, int nreduce,
                             int PE_start, int logPE_stride,
                             int PE_size, double *pWrk,
                             long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_min_to_all(long double *target,
                                 const long double *source, int nreduce,
                                 int PE_start, int logPE_stride,
                                 int PE_size, long double *pWrk,
                                 long *pSync);

SHMEM_FUNCTION_ATTRIBUTES void shmem_short_max_to_all(short *target,
                            const short *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, short *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_max_to_all(int *target,
                          const int *source, int nreduce,
                          int PE_start, int logPE_stride,
                          int PE_size, int *pWrk,
                          long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_max_to_all(long *target,
                           const long *source, int nreduce,
                           int PE_start, int logPE_stride,
                           int PE_size, long *pWrk,
                           long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_max_to_all(long long *target,
                               const long long *source, int nreduce,
                               int PE_start, int logPE_stride,
                               int PE_size, long long *pWrk,
                               long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_max_to_all(float *target,
                            const float *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, float *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_max_to_all(double *target,
                             const double *source, int nreduce,
                             int PE_start, int logPE_stride,
                             int PE_size, double *pWrk,
                             long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_max_to_all(long double *target,
                                 const long double *source, int nreduce,
                                 int PE_start, int logPE_stride,
                                 int PE_size, long double *pWrk,
                                 long *pSync);

SHMEM_FUNCTION_ATTRIBUTES void shmem_short_sum_to_all(short *target,
                            const short *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, short *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_sum_to_all(int *target,
                          const int *source, int nreduce,
                          int PE_start, int logPE_stride,
                          int PE_size, int *pWrk,
                          long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_sum_to_all(long *target,
                           const long *source, int nreduce,
                           int PE_start, int logPE_stride,
                           int PE_size, long *pWrk,
                           long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_sum_to_all(long long *target,
                               const long long *source, int nreduce,
                               int PE_start, int logPE_stride,
                               int PE_size, long long *pWrk,
                               long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_sum_to_all(float *target,
                            const float *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, float *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_sum_to_all(double *target,
                             const double *source, int nreduce,
                             int PE_start, int logPE_stride,
                             int PE_size, double *pWrk,
                             long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_sum_to_all(long double *target,
                                 const long double *source, int nreduce,
                                 int PE_start, int logPE_stride,
                                 int PE_size, long double *pWrk,
                                 long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_complexf_sum_to_all(float _Complex *target,
                               const float _Complex *source, int nreduce,
                               int PE_start, int logPE_stride,
                               int PE_size, float _Complex *pWrk,
                               long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_complexd_sum_to_all(double _Complex *target,
                               const double _Complex *source, int nreduce,
                               int PE_start, int logPE_stride,
                               int PE_size, double _Complex *pWrk,
                               long *pSync);

SHMEM_FUNCTION_ATTRIBUTES void shmem_short_prod_to_all(short *target,
                             const short *source, int nreduce,
                             int PE_start, int logPE_stride,
                             int PE_size, short *pWrk,
                             long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_prod_to_all(int *target,
                           const int *source, int nreduce,
                           int PE_start, int logPE_stride,
                           int PE_size, int *pWrk,
                           long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_prod_to_all(long *target,
                            const long *source, int nreduce,
                            int PE_start, int logPE_stride,
                            int PE_size, long *pWrk,
                            long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_prod_to_all(long long *target,
                                const long long *source, int nreduce,
                                int PE_start, int logPE_stride,
                                int PE_size, long long *pWrk,
                                long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_float_prod_to_all(float *target,
                             const float *source, int nreduce,
                             int PE_start, int logPE_stride,
                             int PE_size, float *pWrk,
                             long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_double_prod_to_all(double *target,
                              const double *source, int nreduce,
                              int PE_start, int logPE_stride,
                              int PE_size, double *pWrk,
                              long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longdouble_prod_to_all(long double *target,
                                  const long double *source, int nreduce,
                                  int PE_start, int logPE_stride,
                                  int PE_size, long double *pWrk,
                                  long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_complexf_prod_to_all(float _Complex *target,
                                const float _Complex *source, int nreduce,
                                int PE_start, int logPE_stride,
                                int PE_size, float _Complex *pWrk,
                                long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_complexd_prod_to_all(double _Complex *target,
                                const double _Complex *source, int nreduce,
                                int PE_start, int logPE_stride,
                                int PE_size, double _Complex *pWrk,
                                long *pSync);

/* COLL: Collect Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_collect32(void *target, const void *source, size_t nlong,
                     int PE_start, int logPE_stride, int PE_size, long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_collect64(void *target, const void *source, size_t nlong,
                     int PE_start, int logPE_stride, int PE_size, long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_fcollect32(void *target, const void *source, size_t nlong,
                      int PE_start, int logPE_stride, int PE_size,
                      long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_fcollect64(void *target, const void *source, size_t nlong,
                      int PE_start, int logPE_stride, int PE_size,
                      long *pSync);

/* COLL: Broadcast Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_broadcast32(void *target, const void *source, size_t nlong,
                       int PE_root, int PE_start, int logPE_stride,
                       int PE_size, long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_broadcast64(void *target, const void *source, size_t nlong,
                       int PE_root, int PE_start, int logPE_stride,
                       int PE_size, long *pSync);

/* COLL: All-to-All routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_alltoall32(void *dest, const void *source, size_t nelems, int PE_start,
                      int logPE_stride, int PE_size, long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_alltoall64(void *dest, const void *source, size_t nelems, int PE_start,
                      int logPE_stride, int PE_size, long *pSync);

SHMEM_FUNCTION_ATTRIBUTES void shmem_alltoalls32(void *dest, const void *source, ptrdiff_t dst,
                       ptrdiff_t sst, size_t nelems, int PE_start,
                       int logPE_stride, int PE_size, long *pSync);
SHMEM_FUNCTION_ATTRIBUTES void shmem_alltoalls64(void *dest, const void *source, ptrdiff_t dst,
                       ptrdiff_t sst, size_t nelems, int PE_start,
                       int logPE_stride, int PE_size, long *pSync);

/* Point-to-Point Synchronization Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_wait(long *ivar, long cmp_value) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_short_wait(short *var, short value) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_wait(int *var, int value) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_wait(long *var, long value) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_wait(long long *var, long long value) SHMEM_ATTRIBUTE_DEPRECATED;

SHMEM_FUNCTION_ATTRIBUTES void shmem_short_wait_until(short *var, int cmp, short value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int_wait_until(int *var, int cmp, int value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_long_wait_until(long *var, int cmp, long value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_longlong_wait_until(long long *var, int cmp, long long value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ushort_wait_until(unsigned short *var, int cmp, unsigned short value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint_wait_until(unsigned int *var, int cmp, unsigned int value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulong_wait_until(unsigned long *var, int cmp, unsigned long value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ulonglong_wait_until(unsigned long long *var, int cmp, unsigned long long value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int32_wait_until(int32_t *var, int cmp, int32_t value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_int64_wait_until(int64_t *var, int cmp, int64_t value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint32_wait_until(uint32_t *var, int cmp, uint32_t value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_uint64_wait_until(uint64_t *var, int cmp, uint64_t value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_size_wait_until(size_t *var, int cmp, size_t value);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ptrdiff_wait_until(ptrdiff_t *var, int cmp, ptrdiff_t value);

/* Special case, only enabled when C++ and C11 bindings are disabled */
#if ( !defined(__cplusplus) && \
      !(defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) ) || \
    defined(SHMEM_INTERNAL_INCLUDE) || defined(SHMEM_DECLARE_SPECIAL_CASES)
SHMEM_FUNCTION_ATTRIBUTES void shmem_wait_until(long *ivar, int cmp, long value);
#endif

SHMEM_FUNCTION_ATTRIBUTES int shmem_short_test(short *var, int cmp, short value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_int_test(int *var, int cmp, int value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_long_test(long *var, int cmp, long value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_longlong_test(long long *var, int cmp, long long value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_ushort_test(unsigned short *var, int cmp, unsigned short value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_uint_test(unsigned int *var, int cmp, unsigned int value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_ulong_test(unsigned long *var, int cmp, unsigned long value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_ulonglong_test(unsigned long long *var, int cmp, unsigned long long value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_int32_test(int32_t *var, int cmp, int32_t value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_int64_test(int64_t *var, int cmp, int64_t value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_uint32_test(uint32_t *var, int cmp, uint32_t value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_uint64_test(uint64_t *var, int cmp, uint64_t value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_size_test(size_t *var, int cmp, size_t value);
SHMEM_FUNCTION_ATTRIBUTES int shmem_ptrdiff_test(ptrdiff_t *var, int cmp, ptrdiff_t value);

/* Memory Ordering Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_quiet(void);
SHMEM_FUNCTION_ATTRIBUTES void shmem_fence(void);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_quiet(shmem_ctx_t ctx);
SHMEM_FUNCTION_ATTRIBUTES void shmem_ctx_fence(shmem_ctx_t ctx);

/* Distributed Locking Routines */
SHMEM_FUNCTION_ATTRIBUTES void shmem_set_lock(long *lock);
SHMEM_FUNCTION_ATTRIBUTES void shmem_clear_lock(long *lock);
SHMEM_FUNCTION_ATTRIBUTES int shmem_test_lock(long *lock);

/* Cache Management Routines (deprecated) */
SHMEM_FUNCTION_ATTRIBUTES void shmem_set_cache_inv(void) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_set_cache_line_inv(void *target) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_clear_cache_inv(void) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_clear_cache_line_inv(void *target) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_udcflush(void) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shmem_udcflush_line(void *target) SHMEM_ATTRIBUTE_DEPRECATED;

/* Deprecated API */
SHMEM_FUNCTION_ATTRIBUTES int _num_pes(void) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES int _my_pe(void) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void *shmalloc(size_t size) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void *shmemalign(size_t alignment, size_t size) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void *shrealloc(void *ptr, size_t size) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void shfree(void *ptr) SHMEM_ATTRIBUTE_DEPRECATED;
SHMEM_FUNCTION_ATTRIBUTES void start_pes(int npes) SHMEM_ATTRIBUTE_DEPRECATED;


/* C++ overloaded declarations */
#ifdef __cplusplus
} /* extern "C" */

#if __cplusplus >= 201402L
#define SHMEM_CXX_ATTRIBUTE_DEPRECATED [[deprecated]]
#else
#define SHMEM_CXX_ATTRIBUTE_DEPRECATED
#endif

/* Blocking block, scalar, and block-strided put */
static inline void shmem_put(float* dest, const float* source,
                             size_t nelems, int pe) {
    shmem_float_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, float* dest, const float* source,
                             size_t nelems, int pe) {
    shmem_ctx_float_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(double* dest, const double* source,
                             size_t nelems, int pe) {
    shmem_double_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, double* dest, const double* source,
                             size_t nelems, int pe) {
    shmem_ctx_double_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(long double* dest, const long double* source,
                             size_t nelems, int pe) {
    shmem_longdouble_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, long double* dest, const long double* source,
                             size_t nelems, int pe) {
    shmem_ctx_longdouble_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(char* dest, const char* source,
                             size_t nelems, int pe) {
    shmem_char_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, char* dest, const char* source,
                             size_t nelems, int pe) {
    shmem_ctx_char_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(signed char* dest, const signed char* source,
                             size_t nelems, int pe) {
    shmem_schar_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, signed char* dest, const signed char* source,
                             size_t nelems, int pe) {
    shmem_ctx_schar_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(short* dest, const short* source,
                             size_t nelems, int pe) {
    shmem_short_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, short* dest, const short* source,
                             size_t nelems, int pe) {
    shmem_ctx_short_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(int* dest, const int* source,
                             size_t nelems, int pe) {
    shmem_int_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, int* dest, const int* source,
                             size_t nelems, int pe) {
    shmem_ctx_int_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(long* dest, const long* source,
                             size_t nelems, int pe) {
    shmem_long_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, long* dest, const long* source,
                             size_t nelems, int pe) {
    shmem_ctx_long_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(long long* dest, const long long* source,
                             size_t nelems, int pe) {
    shmem_longlong_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, long long* dest, const long long* source,
                             size_t nelems, int pe) {
    shmem_ctx_longlong_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(unsigned char* dest, const unsigned char* source,
                             size_t nelems, int pe) {
    shmem_uchar_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, unsigned char* dest, const unsigned char* source,
                             size_t nelems, int pe) {
    shmem_ctx_uchar_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(unsigned short* dest, const unsigned short* source,
                             size_t nelems, int pe) {
    shmem_ushort_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, unsigned short* dest, const unsigned short* source,
                             size_t nelems, int pe) {
    shmem_ctx_ushort_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(unsigned int* dest, const unsigned int* source,
                             size_t nelems, int pe) {
    shmem_uint_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, unsigned int* dest, const unsigned int* source,
                             size_t nelems, int pe) {
    shmem_ctx_uint_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(unsigned long* dest, const unsigned long* source,
                             size_t nelems, int pe) {
    shmem_ulong_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, unsigned long* dest, const unsigned long* source,
                             size_t nelems, int pe) {
    shmem_ctx_ulong_put(ctx, dest, source, nelems, pe);
}
static inline void shmem_put(unsigned long long* dest, const unsigned long long* source,
                             size_t nelems, int pe) {
    shmem_ulonglong_put(dest, source, nelems, pe);
}
static inline void shmem_put(shmem_ctx_t ctx, unsigned long long* dest, const unsigned long long* source,
                             size_t nelems, int pe) {
    shmem_ctx_ulonglong_put(ctx, dest, source, nelems, pe);
}

static inline void shmem_p(float* dest, float value, int pe) {
    shmem_float_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, float* dest, float value, int pe) {
    shmem_ctx_float_p(ctx, dest, value, pe);
}
static inline void shmem_p(double* dest, double value, int pe) {
    shmem_double_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, double* dest, double value, int pe) {
    shmem_ctx_double_p(ctx, dest, value, pe);
}
static inline void shmem_p(long double* dest, long double value, int pe) {
    shmem_longdouble_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, long double* dest, long double value, int pe) {
    shmem_ctx_longdouble_p(ctx, dest, value, pe);
}
static inline void shmem_p(char* dest, char value, int pe) {
    shmem_char_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, char* dest, char value, int pe) {
    shmem_ctx_char_p(ctx, dest, value, pe);
}
static inline void shmem_p(signed char* dest, signed char value, int pe) {
    shmem_schar_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, signed char* dest, signed char value, int pe) {
    shmem_ctx_schar_p(ctx, dest, value, pe);
}
static inline void shmem_p(short* dest, short value, int pe) {
    shmem_short_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, short* dest, short value, int pe) {
    shmem_ctx_short_p(ctx, dest, value, pe);
}
static inline void shmem_p(int* dest, int value, int pe) {
    shmem_int_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, int* dest, int value, int pe) {
    shmem_ctx_int_p(ctx, dest, value, pe);
}
static inline void shmem_p(long* dest, long value, int pe) {
    shmem_long_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, long* dest, long value, int pe) {
    shmem_ctx_long_p(ctx, dest, value, pe);
}
static inline void shmem_p(long long* dest, long long value, int pe) {
    shmem_longlong_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, long long* dest, long long value, int pe) {
    shmem_ctx_longlong_p(ctx, dest, value, pe);
}
static inline void shmem_p(unsigned char* dest, unsigned char value, int pe) {
    shmem_uchar_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, unsigned char* dest, unsigned char value, int pe) {
    shmem_ctx_uchar_p(ctx, dest, value, pe);
}
static inline void shmem_p(unsigned short* dest, unsigned short value, int pe) {
    shmem_ushort_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, unsigned short* dest, unsigned short value, int pe) {
    shmem_ctx_ushort_p(ctx, dest, value, pe);
}
static inline void shmem_p(unsigned int* dest, unsigned int value, int pe) {
    shmem_uint_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, unsigned int* dest, unsigned int value, int pe) {
    shmem_ctx_uint_p(ctx, dest, value, pe);
}
static inline void shmem_p(unsigned long* dest, unsigned long value, int pe) {
    shmem_ulong_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, unsigned long* dest, unsigned long value, int pe) {
    shmem_ctx_ulong_p(ctx, dest, value, pe);
}
static inline void shmem_p(unsigned long long* dest, unsigned long long value, int pe) {
    shmem_ulonglong_p(dest, value, pe);
}
static inline void shmem_p(shmem_ctx_t ctx, unsigned long long* dest, unsigned long long value, int pe) {
    shmem_ctx_ulonglong_p(ctx, dest, value, pe);
}

static inline void shmem_iput(float *target, const float *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_float_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, float *target, const float *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_float_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(double *target, const double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_double_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, double *target, const double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_double_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(long double *target, const long double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_longdouble_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, long double *target, const long double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_longdouble_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(char *target, const char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_char_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, char *target, const char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_char_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(signed char *target, const signed char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_schar_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, signed char *target, const signed char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_schar_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(short *target, const short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_short_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, short *target, const short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_short_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(int *target, const int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_int_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, int *target, const int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_int_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(long *target, const long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_long_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, long *target, const long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_long_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(long long *target, const long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_longlong_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, long long *target, const long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_longlong_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(unsigned char *target, const unsigned char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_uchar_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_uchar_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(unsigned short *target, const unsigned short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ushort_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_ushort_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(unsigned int *target, const unsigned int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_uint_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_uint_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(unsigned long *target, const unsigned long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ulong_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_ulong_iput(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iput(unsigned long long *target, const unsigned long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ulonglong_iput(target, source, tst, sst, len, pe);
}
static inline void shmem_iput(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_ulonglong_iput(ctx, target, source, tst, sst, len, pe);
}

/* Blocking block, scalar, and block-strided get */
static inline void shmem_get(float* dest, const float* source,
                             size_t nelems, int pe) {
    shmem_float_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, float* dest, const float* source,
                             size_t nelems, int pe) {
    shmem_ctx_float_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(double* dest, const double* source,
                             size_t nelems, int pe) {
    shmem_double_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, double* dest, const double* source,
                             size_t nelems, int pe) {
    shmem_ctx_double_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(long double* dest, const long double* source,
                             size_t nelems, int pe) {
    shmem_longdouble_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, long double* dest, const long double* source,
                             size_t nelems, int pe) {
    shmem_ctx_longdouble_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(char* dest, const char* source,
                             size_t nelems, int pe) {
    shmem_char_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, char* dest, const char* source,
                             size_t nelems, int pe) {
    shmem_ctx_char_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(signed char* dest, const signed char* source,
                             size_t nelems, int pe) {
    shmem_schar_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, signed char* dest, const signed char* source,
                             size_t nelems, int pe) {
    shmem_ctx_schar_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(short* dest, const short* source,
                             size_t nelems, int pe) {
    shmem_short_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, short* dest, const short* source,
                             size_t nelems, int pe) {
    shmem_ctx_short_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(int* dest, const int* source,
                             size_t nelems, int pe) {
    shmem_int_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, int* dest, const int* source,
                             size_t nelems, int pe) {
    shmem_ctx_int_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(long* dest, const long* source,
                             size_t nelems, int pe) {
    shmem_long_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, long* dest, const long* source,
                             size_t nelems, int pe) {
    shmem_ctx_long_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(long long* dest, const long long* source,
                             size_t nelems, int pe) {
    shmem_longlong_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, long long* dest, const long long* source,
                             size_t nelems, int pe) {
    shmem_ctx_longlong_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(unsigned char* dest, const unsigned char* source,
                             size_t nelems, int pe) {
    shmem_uchar_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, unsigned char* dest, const unsigned char* source,
                             size_t nelems, int pe) {
    shmem_ctx_uchar_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(unsigned short* dest, const unsigned short* source,
                             size_t nelems, int pe) {
    shmem_ushort_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, unsigned short* dest, const unsigned short* source,
                             size_t nelems, int pe) {
    shmem_ctx_ushort_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(unsigned int* dest, const unsigned int* source,
                             size_t nelems, int pe) {
    shmem_uint_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, unsigned int* dest, const unsigned int* source,
                             size_t nelems, int pe) {
    shmem_ctx_uint_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(unsigned long* dest, const unsigned long* source,
                             size_t nelems, int pe) {
    shmem_ulong_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, unsigned long* dest, const unsigned long* source,
                             size_t nelems, int pe) {
    shmem_ctx_ulong_get(ctx, dest, source, nelems, pe);
}
static inline void shmem_get(unsigned long long* dest, const unsigned long long* source,
                             size_t nelems, int pe) {
    shmem_ulonglong_get(dest, source, nelems, pe);
}
static inline void shmem_get(shmem_ctx_t ctx, unsigned long long* dest, const unsigned long long* source,
                             size_t nelems, int pe) {
    shmem_ctx_ulonglong_get(ctx, dest, source, nelems, pe);
}

static inline float shmem_g(const float* src, int pe) {
    return shmem_float_g(src, pe);
}
static inline float shmem_g(shmem_ctx_t ctx, const float* src, int pe) {
    return shmem_ctx_float_g(ctx, src, pe);
}
static inline double shmem_g(const double* src, int pe) {
    return shmem_double_g(src, pe);
}
static inline double shmem_g(shmem_ctx_t ctx, const double* src, int pe) {
    return shmem_ctx_double_g(ctx, src, pe);
}
static inline long double shmem_g(const long double* src, int pe) {
    return shmem_longdouble_g(src, pe);
}
static inline long double shmem_g(shmem_ctx_t ctx, const long double* src, int pe) {
    return shmem_ctx_longdouble_g(ctx, src, pe);
}
static inline char shmem_g(const char* src, int pe) {
    return shmem_char_g(src, pe);
}
static inline char shmem_g(shmem_ctx_t ctx, const char* src, int pe) {
    return shmem_ctx_char_g(ctx, src, pe);
}
static inline signed char shmem_g(const signed char* src, int pe) {
    return shmem_schar_g(src, pe);
}
static inline signed char shmem_g(shmem_ctx_t ctx, const signed char* src, int pe) {
    return shmem_ctx_schar_g(ctx, src, pe);
}
static inline short shmem_g(const short* src, int pe) {
    return shmem_short_g(src, pe);
}
static inline short shmem_g(shmem_ctx_t ctx, const short* src, int pe) {
    return shmem_ctx_short_g(ctx, src, pe);
}
static inline int shmem_g(const int* src, int pe) {
    return shmem_int_g(src, pe);
}
static inline int shmem_g(shmem_ctx_t ctx, const int* src, int pe) {
    return shmem_ctx_int_g(ctx, src, pe);
}
static inline long shmem_g(const long* src, int pe) {
    return shmem_long_g(src, pe);
}
static inline long shmem_g(shmem_ctx_t ctx, const long* src, int pe) {
    return shmem_ctx_long_g(ctx, src, pe);
}
static inline long long shmem_g(const long long* src, int pe) {
    return shmem_longlong_g(src, pe);
}
static inline long long shmem_g(shmem_ctx_t ctx, const long long* src, int pe) {
    return shmem_ctx_longlong_g(ctx, src, pe);
}
static inline unsigned char shmem_g(const unsigned char* src, int pe) {
    return shmem_uchar_g(src, pe);
}
static inline unsigned char shmem_g(shmem_ctx_t ctx, const unsigned char* src, int pe) {
    return shmem_ctx_uchar_g(ctx, src, pe);
}
static inline unsigned short shmem_g(const unsigned short* src, int pe) {
    return shmem_ushort_g(src, pe);
}
static inline unsigned short shmem_g(shmem_ctx_t ctx, const unsigned short* src, int pe) {
    return shmem_ctx_ushort_g(ctx, src, pe);
}
static inline unsigned int shmem_g(const unsigned int* src, int pe) {
    return shmem_uint_g(src, pe);
}
static inline unsigned int shmem_g(shmem_ctx_t ctx, const unsigned int* src, int pe) {
    return shmem_ctx_uint_g(ctx, src, pe);
}
static inline unsigned long shmem_g(const unsigned long* src, int pe) {
    return shmem_ulong_g(src, pe);
}
static inline unsigned long shmem_g(shmem_ctx_t ctx, const unsigned long* src, int pe) {
    return shmem_ctx_ulong_g(ctx, src, pe);
}
static inline unsigned long long shmem_g(const unsigned long long* src, int pe) {
    return shmem_ulonglong_g(src, pe);
}
static inline unsigned long long shmem_g(shmem_ctx_t ctx, const unsigned long long* src, int pe) {
    return shmem_ctx_ulonglong_g(ctx, src, pe);
}

static inline void shmem_iget(float *target, const float *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_float_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, float *target, const float *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_float_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(double *target, const double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_double_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, double *target, const double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_double_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(long double *target, const long double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_longdouble_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, long double *target, const long double *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_longdouble_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(char *target, const char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_char_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, char *target, const char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_char_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(signed char *target, const signed char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_schar_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, signed char *target, const signed char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_schar_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(short *target, const short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_short_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, short *target, const short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_short_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(int *target, const int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_int_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, int *target, const int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_int_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(long *target, const long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_long_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, long *target, const long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_long_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(long long *target, const long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_longlong_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, long long *target, const long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_longlong_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(unsigned char *target, const unsigned char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_uchar_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, unsigned char *target, const unsigned char *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_uchar_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(unsigned short *target, const unsigned short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ushort_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, unsigned short *target, const unsigned short *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_ushort_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(unsigned int *target, const unsigned int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_uint_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, unsigned int *target, const unsigned int *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_uint_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(unsigned long *target, const unsigned long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ulong_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, unsigned long *target, const unsigned long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_ulong_iget(ctx, target, source, tst, sst, len, pe);
}
static inline void shmem_iget(unsigned long long *target, const unsigned long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ulonglong_iget(target, source, tst, sst, len, pe);
}
static inline void shmem_iget(shmem_ctx_t ctx, unsigned long long *target, const unsigned long long *source,
                              ptrdiff_t tst, ptrdiff_t sst,
                              size_t len, int pe) {
    shmem_ctx_ulonglong_iget(ctx, target, source, tst, sst, len, pe);
}

/* Nonblocking block put/get */
static inline void shmem_put_nbi(float* dest, const float* source,
                                 size_t nelems, int pe) {
    shmem_float_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, float* dest, const float* source,
                                 size_t nelems, int pe) {
    shmem_ctx_float_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(double* dest, const double* source,
                                 size_t nelems, int pe) {
    shmem_double_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, double* dest, const double* source,
                                 size_t nelems, int pe) {
    shmem_ctx_double_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(long double* dest, const long double* source,
                                 size_t nelems, int pe) {
    shmem_longdouble_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, long double* dest, const long double* source,
                                 size_t nelems, int pe) {
    shmem_ctx_longdouble_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(char* dest, const char* source,
                                 size_t nelems, int pe) {
    shmem_char_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, char* dest, const char* source,
                                 size_t nelems, int pe) {
    shmem_ctx_char_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(signed char* dest, const signed char* source,
                                 size_t nelems, int pe) {
    shmem_schar_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, signed char* dest, const signed char* source,
                                 size_t nelems, int pe) {
    shmem_ctx_schar_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(short* dest, const short* source,
                                 size_t nelems, int pe) {
    shmem_short_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, short* dest, const short* source,
                                 size_t nelems, int pe) {
    shmem_ctx_short_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(int* dest, const int* source,
                                 size_t nelems, int pe) {
    shmem_int_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, int* dest, const int* source,
                                 size_t nelems, int pe) {
    shmem_ctx_int_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(long* dest, const long* source,
                                 size_t nelems, int pe) {
    shmem_long_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, long* dest, const long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_long_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(long long* dest, const long long* source,
                                 size_t nelems, int pe) {
    shmem_longlong_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, long long* dest, const long long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_longlong_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(unsigned char* dest, const unsigned char* source,
                                 size_t nelems, int pe) {
    shmem_uchar_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, unsigned char* dest, const unsigned char* source,
                                 size_t nelems, int pe) {
    shmem_ctx_uchar_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(unsigned short* dest, const unsigned short* source,
                                 size_t nelems, int pe) {
    shmem_ushort_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, unsigned short* dest, const unsigned short* source,
                                 size_t nelems, int pe) {
    shmem_ctx_ushort_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(unsigned int* dest, const unsigned int* source,
                                 size_t nelems, int pe) {
    shmem_uint_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, unsigned int* dest, const unsigned int* source,
                                 size_t nelems, int pe) {
    shmem_ctx_uint_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(unsigned long* dest, const unsigned long* source,
                                 size_t nelems, int pe) {
    shmem_ulong_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, unsigned long* dest, const unsigned long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_ulong_put_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_put_nbi(unsigned long long* dest, const unsigned long long* source,
                                 size_t nelems, int pe) {
    shmem_ulonglong_put_nbi(dest, source, nelems, pe);
}
static inline void shmem_put_nbi(shmem_ctx_t ctx, unsigned long long* dest, const unsigned long long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_ulonglong_put_nbi(ctx, dest, source, nelems, pe);
}

static inline void shmem_get_nbi(float* dest, const float* source,
                                 size_t nelems, int pe) {
    shmem_float_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, float* dest, const float* source,
                                 size_t nelems, int pe) {
    shmem_ctx_float_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(double* dest, const double* source,
                                 size_t nelems, int pe) {
    shmem_double_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, double* dest, const double* source,
                                 size_t nelems, int pe) {
    shmem_ctx_double_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(long double* dest, const long double* source,
                                 size_t nelems, int pe) {
    shmem_longdouble_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, long double* dest, const long double* source,
                                 size_t nelems, int pe) {
    shmem_ctx_longdouble_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(char* dest, const char* source,
                                 size_t nelems, int pe) {
    shmem_char_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, char* dest, const char* source,
                                 size_t nelems, int pe) {
    shmem_ctx_char_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(signed char* dest, const signed char* source,
                                 size_t nelems, int pe) {
    shmem_schar_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, signed char* dest, const signed char* source,
                                 size_t nelems, int pe) {
    shmem_ctx_schar_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(short* dest, const short* source,
                                 size_t nelems, int pe) {
    shmem_short_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, short* dest, const short* source,
                                 size_t nelems, int pe) {
    shmem_ctx_short_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(int* dest, const int* source,
                                 size_t nelems, int pe) {
    shmem_int_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, int* dest, const int* source,
                                 size_t nelems, int pe) {
    shmem_ctx_int_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(long* dest, const long* source,
                                 size_t nelems, int pe) {
    shmem_long_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, long* dest, const long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_long_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(long long* dest, const long long* source,
                                 size_t nelems, int pe) {
    shmem_longlong_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, long long* dest, const long long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_longlong_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(unsigned char* dest, const unsigned char* source,
                                 size_t nelems, int pe) {
    shmem_uchar_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, unsigned char* dest, const unsigned char* source,
                                 size_t nelems, int pe) {
    shmem_ctx_uchar_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(unsigned short* dest, const unsigned short* source,
                                 size_t nelems, int pe) {
    shmem_ushort_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, unsigned short* dest, const unsigned short* source,
                                 size_t nelems, int pe) {
    shmem_ctx_ushort_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(unsigned int* dest, const unsigned int* source,
                                 size_t nelems, int pe) {
    shmem_uint_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, unsigned int* dest, const unsigned int* source,
                                 size_t nelems, int pe) {
    shmem_ctx_uint_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(unsigned long* dest, const unsigned long* source,
                                 size_t nelems, int pe) {
    shmem_ulong_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, unsigned long* dest, const unsigned long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_ulong_get_nbi(ctx, dest, source, nelems, pe);
}
static inline void shmem_get_nbi(unsigned long long* dest, const unsigned long long* source,
                                 size_t nelems, int pe) {
    shmem_ulonglong_get_nbi(dest, source, nelems, pe);
}
static inline void shmem_get_nbi(shmem_ctx_t ctx, unsigned long long* dest, const unsigned long long* source,
                                 size_t nelems, int pe) {
    shmem_ctx_ulonglong_get_nbi(ctx, dest, source, nelems, pe);
}


/* Atomics with standard AMO types */
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_add(int *target, int value, int pe) {
    shmem_int_atomic_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_add(long *target, long value, int pe) {
    shmem_long_atomic_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_add(long long *target, long long value, int pe) {
    shmem_longlong_atomic_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_add(unsigned int *target, unsigned int value, int pe) {
    shmem_uint_atomic_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_add(unsigned long *target, unsigned long value, int pe) {
    shmem_ulong_atomic_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_add(unsigned long long *target, unsigned long long value, int pe) {
    shmem_ulonglong_atomic_add(target, value, pe);
}

static inline void shmem_atomic_add(int *target, int value, int pe) {
    shmem_int_atomic_add(target, value, pe);
}
static inline void shmem_atomic_add(shmem_ctx_t ctx, int *target, int value, int pe) {
    shmem_ctx_int_atomic_add(ctx, target, value, pe);
}
static inline void shmem_atomic_add(long *target, long value, int pe) {
    shmem_long_atomic_add(target, value, pe);
}
static inline void shmem_atomic_add(shmem_ctx_t ctx, long *target, long value, int pe) {
    shmem_ctx_long_atomic_add(ctx, target, value, pe);
}
static inline void shmem_atomic_add(long long *target, long long value, int pe) {
    shmem_longlong_atomic_add(target, value, pe);
}
static inline void shmem_atomic_add(shmem_ctx_t ctx, long long *target, long long value, int pe) {
    shmem_ctx_longlong_atomic_add(ctx, target, value, pe);
}
static inline void shmem_atomic_add(unsigned int *target, unsigned int value, int pe) {
    shmem_uint_atomic_add(target, value, pe);
}
static inline void shmem_atomic_add(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe) {
    shmem_ctx_uint_atomic_add(ctx, target, value, pe);
}
static inline void shmem_atomic_add(unsigned long *target, unsigned long value, int pe) {
    shmem_ulong_atomic_add(target, value, pe);
}
static inline void shmem_atomic_add(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe) {
    shmem_ctx_ulong_atomic_add(ctx, target, value, pe);
}
static inline void shmem_atomic_add(unsigned long long *target, unsigned long long value, int pe) {
    shmem_ulonglong_atomic_add(target, value, pe);
}
static inline void shmem_atomic_add(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe) {
    shmem_ctx_ulonglong_atomic_add(ctx, target, value, pe);
}

SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline int shmem_cswap(int *target, int cond, int value, int pe) {
    return shmem_int_atomic_compare_swap(target, cond, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long shmem_cswap(long *target, long cond, long value, int pe) {
    return shmem_long_atomic_compare_swap(target, cond, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long long shmem_cswap(long long *target, long long cond, long long value, int pe) {
    return shmem_longlong_atomic_compare_swap(target, cond, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned int shmem_cswap(unsigned int *target, unsigned int cond, unsigned int value, int pe) {
    return shmem_uint_atomic_compare_swap(target, cond, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long shmem_cswap(unsigned long *target, unsigned long cond, unsigned long value, int pe) {
    return shmem_ulong_atomic_compare_swap(target, cond, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long long shmem_cswap(unsigned long long *target, unsigned long long cond, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_compare_swap(target, cond, value, pe);
}

static inline int shmem_atomic_compare_swap(int *target, int cond, int value, int pe) {
    return shmem_int_atomic_compare_swap(target, cond, value, pe);
}
static inline int shmem_atomic_compare_swap(shmem_ctx_t ctx, int *target, int cond, int value, int pe) {
    return shmem_ctx_int_atomic_compare_swap(ctx, target, cond, value, pe);
}
static inline long shmem_atomic_compare_swap(long *target, long cond, long value, int pe) {
    return shmem_long_atomic_compare_swap(target, cond, value, pe);
}
static inline long shmem_atomic_compare_swap(shmem_ctx_t ctx, long *target, long cond, long value, int pe) {
    return shmem_ctx_long_atomic_compare_swap(ctx, target, cond, value, pe);
}
static inline long long shmem_atomic_compare_swap(long long *target, long long cond, long long value, int pe) {
    return shmem_longlong_atomic_compare_swap(target, cond, value, pe);
}
static inline long long shmem_atomic_compare_swap(shmem_ctx_t ctx, long long *target, long long cond, long long value, int pe) {
    return shmem_ctx_longlong_atomic_compare_swap(ctx, target, cond, value, pe);
}
static inline unsigned int shmem_atomic_compare_swap(unsigned int *target, unsigned int cond, unsigned int value, int pe) {
    return shmem_uint_atomic_compare_swap(target, cond, value, pe);
}
static inline unsigned int shmem_atomic_compare_swap(shmem_ctx_t ctx, unsigned int *target, unsigned int cond, unsigned int value, int pe) {
    return shmem_ctx_uint_atomic_compare_swap(ctx, target, cond, value, pe);
}
static inline unsigned long shmem_atomic_compare_swap(unsigned long *target, unsigned long cond, unsigned long value, int pe) {
    return shmem_ulong_atomic_compare_swap(target, cond, value, pe);
}
static inline unsigned long shmem_atomic_compare_swap(shmem_ctx_t ctx, unsigned long *target, unsigned long cond, unsigned long value, int pe) {
    return shmem_ctx_ulong_atomic_compare_swap(ctx, target, cond, value, pe);
}
static inline unsigned long long shmem_atomic_compare_swap(unsigned long long *target, unsigned long long cond, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_compare_swap(target, cond, value, pe);
}
static inline unsigned long long shmem_atomic_compare_swap(shmem_ctx_t ctx, unsigned long long *target, unsigned long long cond, unsigned long long value, int pe) {
    return shmem_ctx_ulonglong_atomic_compare_swap(ctx, target, cond, value, pe);
}

SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline int shmem_finc(int *target, int pe) {
    return shmem_int_atomic_fetch_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long shmem_finc(long *target, int pe) {
    return shmem_long_atomic_fetch_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long long shmem_finc(long long *target, int pe) {
    return shmem_longlong_atomic_fetch_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned int shmem_finc(unsigned int *target, int pe) {
    return shmem_uint_atomic_fetch_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long shmem_finc(unsigned long *target, int pe) {
    return shmem_ulong_atomic_fetch_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long long shmem_finc(unsigned long long *target, int pe) {
    return shmem_ulonglong_atomic_fetch_inc(target, pe);
}

static inline int shmem_atomic_fetch_inc(int *target, int pe) {
    return shmem_int_atomic_fetch_inc(target, pe);
}
static inline int shmem_atomic_fetch_inc(shmem_ctx_t ctx, int *target, int pe) {
    return shmem_ctx_int_atomic_fetch_inc(ctx, target, pe);
}
static inline long shmem_atomic_fetch_inc(long *target, int pe) {
    return shmem_long_atomic_fetch_inc(target, pe);
}
static inline long shmem_atomic_fetch_inc(shmem_ctx_t ctx, long *target, int pe) {
    return shmem_ctx_long_atomic_fetch_inc(ctx, target, pe);
}
static inline long long shmem_atomic_fetch_inc(long long *target, int pe) {
    return shmem_longlong_atomic_fetch_inc(target, pe);
}
static inline long long shmem_atomic_fetch_inc(shmem_ctx_t ctx, long long *target, int pe) {
    return shmem_ctx_longlong_atomic_fetch_inc(ctx, target, pe);
}
static inline unsigned int shmem_atomic_fetch_inc(unsigned int *target, int pe) {
    return shmem_uint_atomic_fetch_inc(target, pe);
}
static inline unsigned int shmem_atomic_fetch_inc(shmem_ctx_t ctx, unsigned int *target, int pe) {
    return shmem_ctx_uint_atomic_fetch_inc(ctx, target, pe);
}
static inline unsigned long shmem_atomic_fetch_inc(unsigned long *target, int pe) {
    return shmem_ulong_atomic_fetch_inc(target, pe);
}
static inline unsigned long shmem_atomic_fetch_inc(shmem_ctx_t ctx, unsigned long *target, int pe) {
    return shmem_ctx_ulong_atomic_fetch_inc(ctx, target, pe);
}
static inline unsigned long long shmem_atomic_fetch_inc(unsigned long long *target, int pe) {
    return shmem_ulonglong_atomic_fetch_inc(target, pe);
}
static inline unsigned long long shmem_atomic_fetch_inc(shmem_ctx_t ctx, unsigned long long *target, int pe) {
    return shmem_ctx_ulonglong_atomic_fetch_inc(ctx, target, pe);
}

SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_inc(int *target, int pe) {
    shmem_int_atomic_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_inc(long *target, int pe) {
    shmem_long_atomic_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_inc(long long *target, int pe) {
    shmem_longlong_atomic_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_inc(unsigned int *target, int pe) {
    shmem_uint_atomic_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_inc(unsigned long *target, int pe) {
    shmem_ulong_atomic_inc(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_inc(unsigned long long *target, int pe) {
    shmem_ulonglong_atomic_inc(target, pe);
}

static inline void shmem_atomic_inc(int *target, int pe) {
    shmem_int_atomic_inc(target, pe);
}
static inline void shmem_atomic_inc(shmem_ctx_t ctx, int *target, int pe) {
    shmem_ctx_int_atomic_inc(ctx, target, pe);
}
static inline void shmem_atomic_inc(long *target, int pe) {
    shmem_long_atomic_inc(target, pe);
}
static inline void shmem_atomic_inc(shmem_ctx_t ctx, long *target, int pe) {
    shmem_ctx_long_atomic_inc(ctx, target, pe);
}
static inline void shmem_atomic_inc(long long *target, int pe) {
    shmem_longlong_atomic_inc(target, pe);
}
static inline void shmem_atomic_inc(shmem_ctx_t ctx, long long *target, int pe) {
    shmem_ctx_longlong_atomic_inc(ctx, target, pe);
}
static inline void shmem_atomic_inc(unsigned int *target, int pe) {
    shmem_uint_atomic_inc(target, pe);
}
static inline void shmem_atomic_inc(shmem_ctx_t ctx, unsigned int *target, int pe) {
    shmem_ctx_uint_atomic_inc(ctx, target, pe);
}
static inline void shmem_atomic_inc(unsigned long *target, int pe) {
    shmem_ulong_atomic_inc(target, pe);
}
static inline void shmem_atomic_inc(shmem_ctx_t ctx, unsigned long *target, int pe) {
    shmem_ctx_ulong_atomic_inc(ctx, target, pe);
}
static inline void shmem_atomic_inc(unsigned long long *target, int pe) {
    shmem_ulonglong_atomic_inc(target, pe);
}
static inline void shmem_atomic_inc(shmem_ctx_t ctx, unsigned long long *target, int pe) {
    shmem_ctx_ulonglong_atomic_inc(ctx, target, pe);
}

SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline int shmem_fadd(int *target, int value, int pe) {
    return shmem_int_atomic_fetch_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long shmem_fadd(long *target, long value, int pe) {
    return shmem_long_atomic_fetch_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long long shmem_fadd(long long *target, long long value, int pe) {
    return shmem_longlong_atomic_fetch_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned int shmem_fadd(unsigned int *target, unsigned int value, int pe) {
    return shmem_uint_atomic_fetch_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long shmem_fadd(unsigned long *target, unsigned long value, int pe) {
    return shmem_ulong_atomic_fetch_add(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long long shmem_fadd(unsigned long long *target, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_fetch_add(target, value, pe);
}

static inline int shmem_atomic_fetch_add(int *target, int value, int pe) {
    return shmem_int_atomic_fetch_add(target, value, pe);
}
static inline int shmem_atomic_fetch_add(shmem_ctx_t ctx, int *target, int value, int pe) {
    return shmem_ctx_int_atomic_fetch_add(ctx, target, value, pe);
}
static inline long shmem_atomic_fetch_add(long *target, long value, int pe) {
    return shmem_long_atomic_fetch_add(target, value, pe);
}
static inline long shmem_atomic_fetch_add(shmem_ctx_t ctx, long *target, long value, int pe) {
    return shmem_ctx_long_atomic_fetch_add(ctx, target, value, pe);
}
static inline long long shmem_atomic_fetch_add(long long *target, long long value, int pe) {
    return shmem_longlong_atomic_fetch_add(target, value, pe);
}
static inline long long shmem_atomic_fetch_add(shmem_ctx_t ctx, long long *target, long long value, int pe) {
    return shmem_ctx_longlong_atomic_fetch_add(ctx, target, value, pe);
}
static inline unsigned int shmem_atomic_fetch_add(unsigned int *target, unsigned int value, int pe) {
    return shmem_uint_atomic_fetch_add(target, value, pe);
}
static inline unsigned int shmem_atomic_fetch_add(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe) {
    return shmem_ctx_uint_atomic_fetch_add(ctx, target, value, pe);
}
static inline unsigned long shmem_atomic_fetch_add(unsigned long *target, unsigned long value, int pe) {
    return shmem_ulong_atomic_fetch_add(target, value, pe);
}
static inline unsigned long shmem_atomic_fetch_add(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe) {
    return shmem_ctx_ulong_atomic_fetch_add(ctx, target, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_add(unsigned long long *target, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_fetch_add(target, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_add(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe) {
    return shmem_ctx_ulonglong_atomic_fetch_add(ctx, target, value, pe);
}

static inline void shmem_atomic_and(int32_t *dest, int32_t value, int pe) {
    shmem_int32_atomic_and(dest, value, pe);
}
static inline void shmem_atomic_and(shmem_ctx_t ctx, int32_t *dest, int32_t value, int pe) {
    shmem_ctx_int32_atomic_and(ctx, dest, value, pe);
}
static inline void shmem_atomic_and(int64_t *dest, int64_t value, int pe) {
    shmem_int64_atomic_and(dest, value, pe);
}
static inline void shmem_atomic_and(shmem_ctx_t ctx, int64_t *dest, int64_t value, int pe) {
    shmem_ctx_int64_atomic_and(ctx, dest, value, pe);
}
static inline void shmem_atomic_and(unsigned int *dest, unsigned int value, int pe) {
    shmem_uint_atomic_and(dest, value, pe);
}
static inline void shmem_atomic_and(shmem_ctx_t ctx, unsigned int *dest, unsigned int value, int pe) {
    shmem_ctx_uint_atomic_and(ctx, dest, value, pe);
}
static inline void shmem_atomic_and(unsigned long *dest, unsigned long value, int pe) {
    shmem_ulong_atomic_and(dest, value, pe);
}
static inline void shmem_atomic_and(shmem_ctx_t ctx, unsigned long *dest, unsigned long value, int pe) {
    shmem_ctx_ulong_atomic_and(ctx, dest, value, pe);
}
static inline void shmem_atomic_and(unsigned long long *dest, unsigned long long value, int pe) {
    shmem_ulonglong_atomic_and(dest, value, pe);
}
static inline void shmem_atomic_and(shmem_ctx_t ctx, unsigned long long *dest, unsigned long long value, int pe) {
    shmem_ctx_ulonglong_atomic_and(ctx, dest, value, pe);
}

static inline void shmem_atomic_or(int32_t *dest, int32_t value, int pe) {
    shmem_int32_atomic_or(dest, value, pe);
}
static inline void shmem_atomic_or(shmem_ctx_t ctx, int32_t *dest, int32_t value, int pe) {
    shmem_ctx_int32_atomic_or(ctx, dest, value, pe);
}
static inline void shmem_atomic_or(int64_t *dest, int64_t value, int pe) {
    shmem_int64_atomic_or(dest, value, pe);
}
static inline void shmem_atomic_or(shmem_ctx_t ctx, int64_t *dest, int64_t value, int pe) {
    shmem_ctx_int64_atomic_or(ctx, dest, value, pe);
}
static inline void shmem_atomic_or(unsigned int *dest, unsigned int value, int pe) {
    shmem_uint_atomic_or(dest, value, pe);
}
static inline void shmem_atomic_or(shmem_ctx_t ctx, unsigned int *dest, unsigned int value, int pe) {
    shmem_ctx_uint_atomic_or(ctx, dest, value, pe);
}
static inline void shmem_atomic_or(unsigned long *dest, unsigned long value, int pe) {
    shmem_ulong_atomic_or(dest, value, pe);
}
static inline void shmem_atomic_or(shmem_ctx_t ctx, unsigned long *dest, unsigned long value, int pe) {
    shmem_ctx_ulong_atomic_or(ctx, dest, value, pe);
}
static inline void shmem_atomic_or(unsigned long long *dest, unsigned long long value, int pe) {
    shmem_ulonglong_atomic_or(dest, value, pe);
}
static inline void shmem_atomic_or(shmem_ctx_t ctx, unsigned long long *dest, unsigned long long value, int pe) {
    shmem_ctx_ulonglong_atomic_or(ctx, dest, value, pe);
}

static inline void shmem_atomic_xor(int32_t *dest, int32_t value, int pe) {
    shmem_int32_atomic_xor(dest, value, pe);
}
static inline void shmem_atomic_xor(shmem_ctx_t ctx, int32_t *dest, int32_t value, int pe) {
    shmem_ctx_int32_atomic_xor(ctx, dest, value, pe);
}
static inline void shmem_atomic_xor(int64_t *dest, int64_t value, int pe) {
    shmem_int64_atomic_xor(dest, value, pe);
}
static inline void shmem_atomic_xor(shmem_ctx_t ctx, int64_t *dest, int64_t value, int pe) {
    shmem_ctx_int64_atomic_xor(ctx, dest, value, pe);
}
static inline void shmem_atomic_xor(unsigned int *dest, unsigned int value, int pe) {
    shmem_uint_atomic_xor(dest, value, pe);
}
static inline void shmem_atomic_xor(shmem_ctx_t ctx, unsigned int *dest, unsigned int value, int pe) {
    shmem_ctx_uint_atomic_xor(ctx, dest, value, pe);
}
static inline void shmem_atomic_xor(unsigned long *dest, unsigned long value, int pe) {
    shmem_ulong_atomic_xor(dest, value, pe);
}
static inline void shmem_atomic_xor(shmem_ctx_t ctx, unsigned long *dest, unsigned long value, int pe) {
    shmem_ctx_ulong_atomic_xor(ctx, dest, value, pe);
}
static inline void shmem_atomic_xor(unsigned long long *dest, unsigned long long value, int pe) {
    shmem_ulonglong_atomic_xor(dest, value, pe);
}
static inline void shmem_atomic_xor(shmem_ctx_t ctx, unsigned long long *dest, unsigned long long value, int pe) {
    shmem_ctx_ulonglong_atomic_xor(ctx, dest, value, pe);
}

static inline int32_t shmem_atomic_fetch_and(int32_t *dest, int32_t value, int pe) {
    return shmem_int32_atomic_fetch_and(dest, value, pe);
}
static inline int32_t shmem_atomic_fetch_and(shmem_ctx_t ctx, int32_t *dest, int32_t value, int pe) {
    return shmem_ctx_int32_atomic_fetch_and(ctx, dest, value, pe);
}
static inline int64_t shmem_atomic_fetch_and(int64_t *dest, int64_t value, int pe) {
    return shmem_int64_atomic_fetch_and(dest, value, pe);
}
static inline int64_t shmem_atomic_fetch_and(shmem_ctx_t ctx, int64_t *dest, int64_t value, int pe) {
    return shmem_ctx_int64_atomic_fetch_and(ctx, dest, value, pe);
}
static inline unsigned int shmem_atomic_fetch_and(unsigned int *dest, unsigned int value, int pe) {
    return shmem_uint_atomic_fetch_and(dest, value, pe);
}
static inline unsigned int shmem_atomic_fetch_and(shmem_ctx_t ctx, unsigned int *dest, unsigned int value, int pe) {
    return shmem_ctx_uint_atomic_fetch_and(ctx, dest, value, pe);
}
static inline unsigned long shmem_atomic_fetch_and(unsigned long *dest, unsigned long value, int pe) {
    return shmem_ulong_atomic_fetch_and(dest, value, pe);
}
static inline unsigned long shmem_atomic_fetch_and(shmem_ctx_t ctx, unsigned long *dest, unsigned long value, int pe) {
    return shmem_ctx_ulong_atomic_fetch_and(ctx, dest, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_and(unsigned long long *dest, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_fetch_and(dest, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_and(shmem_ctx_t ctx, unsigned long long *dest, unsigned long long value, int pe) {
    return shmem_ctx_ulonglong_atomic_fetch_and(ctx, dest, value, pe);
}

static inline int32_t shmem_atomic_fetch_or(int32_t *dest, int32_t value, int pe) {
    return shmem_int32_atomic_fetch_or(dest, value, pe);
}
static inline int32_t shmem_atomic_fetch_or(shmem_ctx_t ctx, int32_t *dest, int32_t value, int pe) {
    return shmem_ctx_int32_atomic_fetch_or(ctx, dest, value, pe);
}
static inline int64_t shmem_atomic_fetch_or(int64_t *dest, int64_t value, int pe) {
    return shmem_int64_atomic_fetch_or(dest, value, pe);
}
static inline int64_t shmem_atomic_fetch_or(shmem_ctx_t ctx, int64_t *dest, int64_t value, int pe) {
    return shmem_ctx_int64_atomic_fetch_or(ctx, dest, value, pe);
}
static inline unsigned int shmem_atomic_fetch_or(unsigned int *dest, unsigned int value, int pe) {
    return shmem_uint_atomic_fetch_or(dest, value, pe);
}
static inline unsigned int shmem_atomic_fetch_or(shmem_ctx_t ctx, unsigned int *dest, unsigned int value, int pe) {
    return shmem_ctx_uint_atomic_fetch_or(ctx, dest, value, pe);
}
static inline unsigned long shmem_atomic_fetch_or(unsigned long *dest, unsigned long value, int pe) {
    return shmem_ulong_atomic_fetch_or(dest, value, pe);
}
static inline unsigned long shmem_atomic_fetch_or(shmem_ctx_t ctx, unsigned long *dest, unsigned long value, int pe) {
    return shmem_ctx_ulong_atomic_fetch_or(ctx, dest, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_or(unsigned long long *dest, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_fetch_or(dest, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_or(shmem_ctx_t ctx, unsigned long long *dest, unsigned long long value, int pe) {
    return shmem_ctx_ulonglong_atomic_fetch_or(ctx, dest, value, pe);
}

static inline int32_t shmem_atomic_fetch_xor(int32_t *dest, int32_t value, int pe) {
    return shmem_int32_atomic_fetch_xor(dest, value, pe);
}
static inline int32_t shmem_atomic_fetch_xor(shmem_ctx_t ctx, int32_t *dest, int32_t value, int pe) {
    return shmem_ctx_int32_atomic_fetch_xor(ctx, dest, value, pe);
}
static inline int64_t shmem_atomic_fetch_xor(int64_t *dest, int64_t value, int pe) {
    return shmem_int64_atomic_fetch_xor(dest, value, pe);
}
static inline int64_t shmem_atomic_fetch_xor(shmem_ctx_t ctx, int64_t *dest, int64_t value, int pe) {
    return shmem_ctx_int64_atomic_fetch_xor(ctx, dest, value, pe);
}
static inline unsigned int shmem_atomic_fetch_xor(unsigned int *dest, unsigned int value, int pe) {
    return shmem_uint_atomic_fetch_xor(dest, value, pe);
}
static inline unsigned int shmem_atomic_fetch_xor(shmem_ctx_t ctx, unsigned int *dest, unsigned int value, int pe) {
    return shmem_ctx_uint_atomic_fetch_xor(ctx, dest, value, pe);
}
static inline unsigned long shmem_atomic_fetch_xor(unsigned long *dest, unsigned long value, int pe) {
    return shmem_ulong_atomic_fetch_xor(dest, value, pe);
}
static inline unsigned long shmem_atomic_fetch_xor(shmem_ctx_t ctx, unsigned long *dest, unsigned long value, int pe) {
    return shmem_ctx_ulong_atomic_fetch_xor(ctx, dest, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_xor(unsigned long long *dest, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_fetch_xor(dest, value, pe);
}
static inline unsigned long long shmem_atomic_fetch_xor(shmem_ctx_t ctx, unsigned long long *dest, unsigned long long value, int pe) {
    return shmem_ctx_ulonglong_atomic_fetch_xor(ctx, dest, value, pe);
}

/* Atomics with extended AMO types */
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline int shmem_swap(int *target, int value, int pe) {
    return shmem_int_atomic_swap(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long shmem_swap(long *target, long value, int pe) {
    return shmem_long_atomic_swap(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long long shmem_swap(long long *target, long long value, int pe) {
    return shmem_longlong_atomic_swap(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned int shmem_swap(unsigned int *target, unsigned int value, int pe) {
    return shmem_uint_atomic_swap(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long shmem_swap(unsigned long *target, unsigned long value, int pe) {
    return shmem_ulong_atomic_swap(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long long shmem_swap(unsigned long long *target, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_swap(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline float shmem_swap(float *target, float value, int pe) {
    return shmem_float_atomic_swap(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline double shmem_swap(double *target, double value, int pe) {
    return shmem_double_atomic_swap(target, value, pe);
}

static inline int shmem_atomic_swap(int *target, int value, int pe) {
    return shmem_int_atomic_swap(target, value, pe);
}
static inline int shmem_atomic_swap(shmem_ctx_t ctx, int *target, int value, int pe) {
    return shmem_ctx_int_atomic_swap(ctx, target, value, pe);
}
static inline long shmem_atomic_swap(long *target, long value, int pe) {
    return shmem_long_atomic_swap(target, value, pe);
}
static inline long shmem_atomic_swap(shmem_ctx_t ctx, long *target, long value, int pe) {
    return shmem_ctx_long_atomic_swap(ctx, target, value, pe);
}
static inline long long shmem_atomic_swap(long long *target, long long value, int pe) {
    return shmem_longlong_atomic_swap(target, value, pe);
}
static inline long long shmem_atomic_swap(shmem_ctx_t ctx, long long *target, long long value, int pe) {
    return shmem_ctx_longlong_atomic_swap(ctx, target, value, pe);
}
static inline unsigned int shmem_atomic_swap(unsigned int *target, unsigned int value, int pe) {
    return shmem_uint_atomic_swap(target, value, pe);
}
static inline unsigned int shmem_atomic_swap(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe) {
    return shmem_ctx_uint_atomic_swap(ctx, target, value, pe);
}
static inline unsigned long shmem_atomic_swap(unsigned long *target, unsigned long value, int pe) {
    return shmem_ulong_atomic_swap(target, value, pe);
}
static inline unsigned long shmem_atomic_swap(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe) {
    return shmem_ctx_ulong_atomic_swap(ctx, target, value, pe);
}
static inline unsigned long long shmem_atomic_swap(unsigned long long *target, unsigned long long value, int pe) {
    return shmem_ulonglong_atomic_swap(target, value, pe);
}
static inline unsigned long long shmem_atomic_swap(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe) {
    return shmem_ctx_ulonglong_atomic_swap(ctx, target, value, pe);
}
static inline float shmem_atomic_swap(float *target, float value, int pe) {
    return shmem_float_atomic_swap(target, value, pe);
}
static inline float shmem_atomic_swap(shmem_ctx_t ctx, float *target, float value, int pe) {
    return shmem_ctx_float_atomic_swap(ctx, target, value, pe);
}
static inline double shmem_atomic_swap(double *target, double value, int pe) {
    return shmem_double_atomic_swap(target, value, pe);
}
static inline double shmem_atomic_swap(shmem_ctx_t ctx, double *target, double value, int pe) {
    return shmem_ctx_double_atomic_swap(ctx, target, value, pe);
}

SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline int shmem_fetch(const int *target, int pe) {
    return shmem_int_atomic_fetch(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long shmem_fetch(const long *target, int pe) {
    return shmem_long_atomic_fetch(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline long long shmem_fetch(const long long *target, int pe) {
    return shmem_longlong_atomic_fetch(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned int shmem_fetch(const unsigned int *target, int pe) {
    return shmem_uint_atomic_fetch(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long shmem_fetch(const unsigned long *target, int pe) {
    return shmem_ulong_atomic_fetch(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline unsigned long long shmem_fetch(const unsigned long long *target, int pe) {
    return shmem_ulonglong_atomic_fetch(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline float shmem_fetch(const float *target, int pe) {
    return shmem_float_atomic_fetch(target, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline double shmem_fetch(const double *target, int pe) {
    return shmem_double_atomic_fetch(target, pe);
}

static inline int shmem_atomic_fetch(const int *target, int pe) {
    return shmem_int_atomic_fetch(target, pe);
}
static inline int shmem_atomic_fetch(shmem_ctx_t ctx, const int *target, int pe) {
    return shmem_ctx_int_atomic_fetch(ctx, target, pe);
}
static inline long shmem_atomic_fetch(const long *target, int pe) {
    return shmem_long_atomic_fetch(target, pe);
}
static inline long shmem_atomic_fetch(shmem_ctx_t ctx, const long *target, int pe) {
    return shmem_ctx_long_atomic_fetch(ctx, target, pe);
}
static inline long long shmem_atomic_fetch(const long long *target, int pe) {
    return shmem_longlong_atomic_fetch(target, pe);
}
static inline long long shmem_atomic_fetch(shmem_ctx_t ctx, const long long *target, int pe) {
    return shmem_ctx_longlong_atomic_fetch(ctx, target, pe);
}
static inline unsigned int shmem_atomic_fetch(const unsigned int *target, int pe) {
    return shmem_uint_atomic_fetch(target, pe);
}
static inline unsigned int shmem_atomic_fetch(shmem_ctx_t ctx, const unsigned int *target, int pe) {
    return shmem_ctx_uint_atomic_fetch(ctx, target, pe);
}
static inline unsigned long shmem_atomic_fetch(const unsigned long *target, int pe) {
    return shmem_ulong_atomic_fetch(target, pe);
}
static inline unsigned long shmem_atomic_fetch(shmem_ctx_t ctx, const unsigned long *target, int pe) {
    return shmem_ctx_ulong_atomic_fetch(ctx, target, pe);
}
static inline unsigned long long shmem_atomic_fetch(const unsigned long long *target, int pe) {
    return shmem_ulonglong_atomic_fetch(target, pe);
}
static inline unsigned long long shmem_atomic_fetch(shmem_ctx_t ctx, const unsigned long long *target, int pe) {
    return shmem_ctx_ulonglong_atomic_fetch(ctx, target, pe);
}
static inline float shmem_atomic_fetch(const float *target, int pe) {
    return shmem_float_atomic_fetch(target, pe);
}
static inline float shmem_atomic_fetch(shmem_ctx_t ctx, const float *target, int pe) {
    return shmem_ctx_float_atomic_fetch(ctx, target, pe);
}
static inline double shmem_atomic_fetch(const double *target, int pe) {
    return shmem_double_atomic_fetch(target, pe);
}
static inline double shmem_atomic_fetch(shmem_ctx_t ctx, const double *target, int pe) {
    return shmem_ctx_double_atomic_fetch(ctx, target, pe);
}

SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(int *target, int value, int pe) {
    shmem_int_atomic_set(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(long *target, long value, int pe) {
    shmem_long_atomic_set(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(long long *target, long long value, int pe) {
    shmem_longlong_atomic_set(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(unsigned int *target, unsigned int value, int pe) {
    shmem_uint_atomic_set(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(unsigned long *target, unsigned long value, int pe) {
    shmem_ulong_atomic_set(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(unsigned long long *target, unsigned long long value, int pe) {
    shmem_ulonglong_atomic_set(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(float *target, float value, int pe) {
    shmem_float_atomic_set(target, value, pe);
}
SHMEM_CXX_ATTRIBUTE_DEPRECATED static inline void shmem_set(double *target, double value, int pe) {
    shmem_double_atomic_set(target, value, pe);
}

static inline void shmem_atomic_set(int *target, int value, int pe) {
    shmem_int_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, int *target, int value, int pe) {
    shmem_ctx_int_atomic_set(ctx, target, value, pe);
}
static inline void shmem_atomic_set(long *target, long value, int pe) {
    shmem_long_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, long *target, long value, int pe) {
    shmem_ctx_long_atomic_set(ctx, target, value, pe);
}
static inline void shmem_atomic_set(long long *target, long long value, int pe) {
    shmem_longlong_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, long long *target, long long value, int pe) {
    shmem_ctx_longlong_atomic_set(ctx, target, value, pe);
}
static inline void shmem_atomic_set(unsigned int *target, unsigned int value, int pe) {
    shmem_uint_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, unsigned int *target, unsigned int value, int pe) {
    shmem_ctx_uint_atomic_set(ctx, target, value, pe);
}
static inline void shmem_atomic_set(unsigned long *target, unsigned long value, int pe) {
    shmem_ulong_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, unsigned long *target, unsigned long value, int pe) {
    shmem_ctx_ulong_atomic_set(ctx, target, value, pe);
}
static inline void shmem_atomic_set(unsigned long long *target, unsigned long long value, int pe) {
    shmem_ulonglong_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, unsigned long long *target, unsigned long long value, int pe) {
    shmem_ctx_ulonglong_atomic_set(ctx, target, value, pe);
}
static inline void shmem_atomic_set(float *target, float value, int pe) {
    shmem_float_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, float *target, float value, int pe) {
    shmem_ctx_float_atomic_set(ctx, target, value, pe);
}
static inline void shmem_atomic_set(double *target, double value, int pe) {
    shmem_double_atomic_set(target, value, pe);
}
static inline void shmem_atomic_set(shmem_ctx_t ctx, double *target, double value, int pe) {
    shmem_ctx_double_atomic_set(ctx, target, value, pe);
}

/* Point-to-point synchronization */

static inline void shmem_wait_until(short *ivar, int cmp, short cmp_value) {
    shmem_short_wait_until(ivar, cmp, cmp_value);
}
static inline void shmem_wait_until(int *ivar, int cmp, int cmp_value) {
    shmem_int_wait_until(ivar, cmp, cmp_value);
}
static inline void shmem_wait_until(long *ivar, int cmp, long cmp_value) {
    shmem_long_wait_until(ivar, cmp, cmp_value);
}
static inline void shmem_wait_until(long long *ivar, int cmp, long long cmp_value) {
    shmem_longlong_wait_until(ivar, cmp, cmp_value);
}
static inline void shmem_wait_until(unsigned short *ivar, int cmp, unsigned short cmp_value) {
    shmem_ushort_wait_until(ivar, cmp, cmp_value);
}
static inline void shmem_wait_until(unsigned int *ivar, int cmp, unsigned int cmp_value) {
    shmem_uint_wait_until(ivar, cmp, cmp_value);
}
static inline void shmem_wait_until(unsigned long *ivar, int cmp, unsigned long cmp_value) {
    shmem_ulong_wait_until(ivar, cmp, cmp_value);
}
static inline void shmem_wait_until(unsigned long long *ivar, int cmp, unsigned long long cmp_value) {
    shmem_ulonglong_wait_until(ivar, cmp, cmp_value);
}

static inline int shmem_test(short *ivar, int cmp, short cmp_value) {
    return shmem_short_test(ivar, cmp, cmp_value);
}
static inline int shmem_test(int *ivar, int cmp, int cmp_value) {
    return shmem_int_test(ivar, cmp, cmp_value);
}
static inline int shmem_test(long *ivar, int cmp, long cmp_value) {
    return shmem_long_test(ivar, cmp, cmp_value);
}
static inline int shmem_test(long long *ivar, int cmp, long long cmp_value) {
    return shmem_longlong_test(ivar, cmp, cmp_value);
}
static inline int shmem_test(unsigned short *ivar, int cmp, unsigned short cmp_value) {
    return shmem_ushort_test(ivar, cmp, cmp_value);
}
static inline int shmem_test(unsigned int *ivar, int cmp, unsigned int cmp_value) {
    return shmem_uint_test(ivar, cmp, cmp_value);
}
static inline int shmem_test(unsigned long *ivar, int cmp, unsigned long cmp_value) {
    return shmem_ulong_test(ivar, cmp, cmp_value);
}
static inline int shmem_test(unsigned long long *ivar, int cmp, unsigned long long cmp_value) {
    return shmem_ulonglong_test(ivar, cmp, cmp_value);
}


/* C11 Generic Macros */
#elif (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L && !defined(SHMEM_INTERNAL_INCLUDE))

/* These expressions have no effect, but cause the compiler to perform type
 * processing on the argument, e.g. to process int[5] down to int *.  EVAL_PTR
 * works with pointer types, including void*.  EVAL_PTR_OR_SCALAR works if the
 * argument is either a pointer (but not void*) or a scalar. */

#define SHMEM_C11_TYPE_EVAL_PTR(arg) &*(arg)
#define SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(arg) (arg)+0

/* Helper routines to pick off specific arguments from a varags list. */
#define SHMEM_C11_ARG0(...) SHMEM_C11_ARG0_HELPER(__VA_ARGS__, sentinel)
#define SHMEM_C11_ARG0_HELPER(first, ...) first

#define SHMEM_C11_ARG1(first, ...) SHMEM_C11_ARG1_HELPER(__VA_ARGS__, sentinel)
#define SHMEM_C11_ARG1_HELPER(second, ...) second

/* This routine is intentionally incompatible with any of the generic OpenSHMEM
 * routines, so that if it is matched, it will cause a compile-time error. */

static inline void shmem_ctx_c11_generic_selection_failed(void) { }

/* Blocking block, scalar, and block-strided put */
#define shmem_put(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_put, \
            double*: shmem_ctx_double_put, \
            long double*: shmem_ctx_longdouble_put, \
            char*: shmem_ctx_char_put, \
            signed char*: shmem_ctx_schar_put, \
            short*: shmem_ctx_short_put, \
            int*: shmem_ctx_int_put, \
            long*: shmem_ctx_long_put, \
            long long*: shmem_ctx_longlong_put, \
            unsigned char*: shmem_ctx_uchar_put, \
            unsigned short*: shmem_ctx_ushort_put, \
            unsigned int*: shmem_ctx_uint_put, \
            unsigned long*: shmem_ctx_ulong_put, \
            unsigned long long*: shmem_ctx_ulonglong_put \
        ), \
        float*: shmem_float_put, \
        double*: shmem_double_put, \
        long double*: shmem_longdouble_put, \
        char*: shmem_char_put, \
        signed char*: shmem_schar_put, \
        short*: shmem_short_put, \
        int*: shmem_int_put, \
        long*: shmem_long_put, \
        long long*: shmem_longlong_put, \
        unsigned char*: shmem_uchar_put, \
        unsigned short*: shmem_ushort_put, \
        unsigned int*: shmem_uint_put, \
        unsigned long*: shmem_ulong_put, \
        unsigned long long*: shmem_ulonglong_put \
    )(__VA_ARGS__)

#define shmem_p(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_p, \
            double*: shmem_ctx_double_p, \
            long double*: shmem_ctx_longdouble_p, \
            char*: shmem_ctx_char_p, \
            signed char*: shmem_ctx_schar_p, \
            short*: shmem_ctx_short_p, \
            int*: shmem_ctx_int_p, \
            long*: shmem_ctx_long_p, \
            long long*: shmem_ctx_longlong_p, \
            unsigned char*: shmem_ctx_uchar_p, \
            unsigned short*: shmem_ctx_ushort_p, \
            unsigned int*: shmem_ctx_uint_p, \
            unsigned long*: shmem_ctx_ulong_p, \
            unsigned long long*: shmem_ctx_ulonglong_p, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        float*: shmem_float_p, \
        double*: shmem_double_p, \
        long double*: shmem_longdouble_p, \
        char*: shmem_char_p, \
        signed char*: shmem_schar_p, \
        short*: shmem_short_p, \
        int*: shmem_int_p, \
        long*: shmem_long_p, \
        long long*: shmem_longlong_p, \
        unsigned char*: shmem_uchar_p, \
        unsigned short*: shmem_ushort_p, \
        unsigned int*: shmem_uint_p, \
        unsigned long*: shmem_ulong_p, \
        unsigned long long*: shmem_ulonglong_p \
    )(__VA_ARGS__)

#define shmem_iput(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_iput, \
            double*: shmem_ctx_double_iput, \
            long double*: shmem_ctx_longdouble_iput, \
            char*: shmem_ctx_char_iput, \
            signed char*: shmem_ctx_schar_iput, \
            short*: shmem_ctx_short_iput, \
            int*: shmem_ctx_int_iput, \
            long*: shmem_ctx_long_iput, \
            long long*: shmem_ctx_longlong_iput, \
            unsigned char*: shmem_ctx_uchar_iput, \
            unsigned short*: shmem_ctx_ushort_iput, \
            unsigned int*: shmem_ctx_uint_iput, \
            unsigned long*: shmem_ctx_ulong_iput, \
            unsigned long long*: shmem_ctx_ulonglong_iput \
        ), \
        float*: shmem_float_iput, \
        double*: shmem_double_iput, \
        long double*: shmem_longdouble_iput, \
        char*: shmem_char_iput, \
        signed char*: shmem_schar_iput, \
        short*: shmem_short_iput, \
        int*: shmem_int_iput, \
        long*: shmem_long_iput, \
        long long*: shmem_longlong_iput, \
        unsigned char*: shmem_uchar_iput, \
        unsigned short*: shmem_ushort_iput, \
        unsigned int*: shmem_uint_iput, \
        unsigned long*: shmem_ulong_iput, \
        unsigned long long*: shmem_ulonglong_iput \
    )(__VA_ARGS__)

/* Blocking block, scalar, and block-strided get */
#define shmem_get(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_get, \
            double*: shmem_ctx_double_get, \
            long double*: shmem_ctx_longdouble_get, \
            char*: shmem_ctx_char_get, \
            signed char*: shmem_ctx_schar_get, \
            short*: shmem_ctx_short_get, \
            int*: shmem_ctx_int_get, \
            long*: shmem_ctx_long_get, \
            long long*: shmem_ctx_longlong_get, \
            unsigned char*: shmem_ctx_uchar_get, \
            unsigned short*: shmem_ctx_ushort_get, \
            unsigned int*: shmem_ctx_uint_get, \
            unsigned long*: shmem_ctx_ulong_get, \
            unsigned long long*: shmem_ctx_ulonglong_get \
        ), \
        float*: shmem_float_get, \
        double*: shmem_double_get, \
        long double*: shmem_longdouble_get, \
        char*: shmem_char_get, \
        signed char*: shmem_schar_get, \
        short*: shmem_short_get, \
        int*: shmem_int_get, \
        long*: shmem_long_get, \
        long long*: shmem_longlong_get, \
        unsigned char*: shmem_uchar_get, \
        unsigned short*: shmem_ushort_get, \
        unsigned int*: shmem_uint_get, \
        unsigned long*: shmem_ulong_get, \
        unsigned long long*: shmem_ulonglong_get \
    )(__VA_ARGS__)

#define shmem_g(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_g, \
            double*: shmem_ctx_double_g, \
            long double*: shmem_ctx_longdouble_g, \
            char*: shmem_ctx_char_g, \
            signed char*: shmem_ctx_schar_g, \
            short*: shmem_ctx_short_g, \
            int*: shmem_ctx_int_g, \
            long*: shmem_ctx_long_g, \
            long long*: shmem_ctx_longlong_g, \
            unsigned char*: shmem_ctx_uchar_g, \
            unsigned short*: shmem_ctx_ushort_g, \
            unsigned int*: shmem_ctx_uint_g, \
            unsigned long*: shmem_ctx_ulong_g, \
            unsigned long long*: shmem_ctx_ulonglong_g, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        float*: shmem_float_g, \
        double*: shmem_double_g, \
        long double*: shmem_longdouble_g, \
        char*: shmem_char_g, \
        signed char*: shmem_schar_g, \
        short*: shmem_short_g, \
        int*: shmem_int_g, \
        long*: shmem_long_g, \
        long long*: shmem_longlong_g, \
        unsigned char*: shmem_uchar_g, \
        unsigned short*: shmem_ushort_g, \
        unsigned int*: shmem_uint_g, \
        unsigned long*: shmem_ulong_g, \
        unsigned long long*: shmem_ulonglong_g \
    )(__VA_ARGS__)

#define shmem_iget(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_iget, \
            double*: shmem_ctx_double_iget, \
            long double*: shmem_ctx_longdouble_iget, \
            char*: shmem_ctx_char_iget, \
            signed char*: shmem_ctx_schar_iget, \
            short*: shmem_ctx_short_iget, \
            int*: shmem_ctx_int_iget, \
            long*: shmem_ctx_long_iget, \
            long long*: shmem_ctx_longlong_iget, \
            unsigned char*: shmem_ctx_uchar_iget, \
            unsigned short*: shmem_ctx_ushort_iget, \
            unsigned int*: shmem_ctx_uint_iget, \
            unsigned long*: shmem_ctx_ulong_iget, \
            unsigned long long*: shmem_ctx_ulonglong_iget \
        ), \
        float*: shmem_float_iget, \
        double*: shmem_double_iget, \
        long double*: shmem_longdouble_iget, \
        char*: shmem_char_iget, \
        signed char*: shmem_schar_iget, \
        short*: shmem_short_iget, \
        int*: shmem_int_iget, \
        long*: shmem_long_iget, \
        long long*: shmem_longlong_iget, \
        unsigned char*: shmem_uchar_iget, \
        unsigned short*: shmem_ushort_iget, \
        unsigned int*: shmem_uint_iget, \
        unsigned long*: shmem_ulong_iget, \
        unsigned long long*: shmem_ulonglong_iget \
    )(__VA_ARGS__)

/* Nonblocking block put/get */
#define shmem_put_nbi(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_put_nbi, \
            double*: shmem_ctx_double_put_nbi, \
            long double*: shmem_ctx_longdouble_put_nbi, \
            char*: shmem_ctx_char_put_nbi, \
            signed char*: shmem_ctx_schar_put_nbi, \
            short*: shmem_ctx_short_put_nbi, \
            int*: shmem_ctx_int_put_nbi, \
            long*: shmem_ctx_long_put_nbi, \
            long long*: shmem_ctx_longlong_put_nbi, \
            unsigned char*: shmem_ctx_uchar_put_nbi, \
            unsigned short*: shmem_ctx_ushort_put_nbi, \
            unsigned int*: shmem_ctx_uint_put_nbi, \
            unsigned long*: shmem_ctx_ulong_put_nbi, \
            unsigned long long*: shmem_ctx_ulonglong_put_nbi \
        ), \
        float*: shmem_float_put_nbi, \
        double*: shmem_double_put_nbi, \
        long double*: shmem_longdouble_put_nbi, \
        char*: shmem_char_put_nbi, \
        signed char*: shmem_schar_put_nbi, \
        short*: shmem_short_put_nbi, \
        int*: shmem_int_put_nbi, \
        long*: shmem_long_put_nbi, \
        long long*: shmem_longlong_put_nbi, \
        unsigned char*: shmem_uchar_put_nbi, \
        unsigned short*: shmem_ushort_put_nbi, \
        unsigned int*: shmem_uint_put_nbi, \
        unsigned long*: shmem_ulong_put_nbi, \
        unsigned long long*: shmem_ulonglong_put_nbi \
    )(__VA_ARGS__)

#define shmem_get_nbi(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            float*: shmem_ctx_float_get_nbi, \
            double*: shmem_ctx_double_get_nbi, \
            long double*: shmem_ctx_longdouble_get_nbi, \
            char*: shmem_ctx_char_get_nbi, \
            signed char*: shmem_ctx_schar_get_nbi, \
            short*: shmem_ctx_short_get_nbi, \
            int*: shmem_ctx_int_get_nbi, \
            long*: shmem_ctx_long_get_nbi, \
            long long*: shmem_ctx_longlong_get_nbi, \
            unsigned char*: shmem_ctx_uchar_get_nbi, \
            unsigned short*: shmem_ctx_ushort_get_nbi, \
            unsigned int*: shmem_ctx_uint_get_nbi, \
            unsigned long*: shmem_ctx_ulong_get_nbi, \
            unsigned long long*: shmem_ctx_ulonglong_get_nbi \
        ), \
        float*: shmem_float_get_nbi, \
        double*: shmem_double_get_nbi, \
        long double*: shmem_longdouble_get_nbi, \
        char*: shmem_char_get_nbi, \
        signed char*: shmem_schar_get_nbi, \
        short*: shmem_short_get_nbi, \
        int*: shmem_int_get_nbi, \
        long*: shmem_long_get_nbi, \
        long long*: shmem_longlong_get_nbi, \
        unsigned char*: shmem_uchar_get_nbi, \
        unsigned short*: shmem_ushort_get_nbi, \
        unsigned int*: shmem_uint_get_nbi, \
        unsigned long*: shmem_ulong_get_nbi, \
        unsigned long long*: shmem_ulonglong_get_nbi \
    )(__VA_ARGS__)

/* Atomics with standard AMO types */
#define shmem_add(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_add, \
        long*: shmem_long_add, \
        long long*: shmem_longlong_add, \
        unsigned int*: shmem_uint_add, \
        unsigned long*: shmem_ulong_add, \
        unsigned long long*: shmem_ulonglong_add \
    )(__VA_ARGS__)

#define shmem_atomic_add(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_add, \
            long*: shmem_ctx_long_atomic_add, \
            long long*: shmem_ctx_longlong_atomic_add, \
            unsigned int*: shmem_ctx_uint_atomic_add, \
            unsigned long*: shmem_ctx_ulong_atomic_add, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_add, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_add, \
        long*: shmem_long_atomic_add, \
        long long*: shmem_longlong_atomic_add, \
        unsigned int*: shmem_uint_atomic_add, \
        unsigned long*: shmem_ulong_atomic_add, \
        unsigned long long*: shmem_ulonglong_atomic_add \
    )(__VA_ARGS__)

#define shmem_cswap(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_cswap, \
        long*: shmem_long_cswap, \
        long long*: shmem_longlong_cswap, \
        unsigned int*: shmem_uint_cswap, \
        unsigned long*: shmem_ulong_cswap, \
        unsigned long long*: shmem_ulonglong_cswap \
    )(__VA_ARGS__)

#define shmem_atomic_compare_swap(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_compare_swap, \
            long*: shmem_ctx_long_atomic_compare_swap, \
            long long*: shmem_ctx_longlong_atomic_compare_swap, \
            unsigned int*: shmem_ctx_uint_atomic_compare_swap, \
            unsigned long*: shmem_ctx_ulong_atomic_compare_swap, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_compare_swap, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_compare_swap, \
        long*: shmem_long_atomic_compare_swap, \
        long long*: shmem_longlong_atomic_compare_swap, \
        unsigned int*: shmem_uint_atomic_compare_swap, \
        unsigned long*: shmem_ulong_atomic_compare_swap, \
        unsigned long long*: shmem_ulonglong_atomic_compare_swap \
    )(__VA_ARGS__)


#define shmem_finc(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_finc, \
        long*: shmem_long_finc, \
        long long*: shmem_longlong_finc, \
        unsigned int*: shmem_uint_finc, \
        unsigned long*: shmem_ulong_finc, \
        unsigned long long*: shmem_ulonglong_finc \
    )(__VA_ARGS__)

#define shmem_atomic_fetch_inc(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_fetch_inc, \
            long*: shmem_ctx_long_atomic_fetch_inc, \
            long long*: shmem_ctx_longlong_atomic_fetch_inc, \
            unsigned int*: shmem_ctx_uint_atomic_fetch_inc, \
            unsigned long*: shmem_ctx_ulong_atomic_fetch_inc, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_fetch_inc, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_fetch_inc, \
        long*: shmem_long_atomic_fetch_inc, \
        long long*: shmem_longlong_atomic_fetch_inc, \
        unsigned int*: shmem_uint_atomic_fetch_inc, \
        unsigned long*: shmem_ulong_atomic_fetch_inc, \
        unsigned long long*: shmem_ulonglong_atomic_fetch_inc \
    )(__VA_ARGS__)

#define shmem_inc(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_inc, \
        long*: shmem_long_inc, \
        long long*: shmem_longlong_inc, \
        unsigned int*: shmem_uint_inc, \
        unsigned long*: shmem_ulong_inc, \
        unsigned long long*: shmem_ulonglong_inc \
    )(__VA_ARGS__)

#define shmem_atomic_inc(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_inc, \
            long*: shmem_ctx_long_atomic_inc, \
            long long*: shmem_ctx_longlong_atomic_inc, \
            unsigned int*: shmem_ctx_uint_atomic_inc, \
            unsigned long*: shmem_ctx_ulong_atomic_inc, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_inc, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_inc, \
        long*: shmem_long_atomic_inc, \
        long long*: shmem_longlong_atomic_inc, \
        unsigned int*: shmem_uint_atomic_inc, \
        unsigned long*: shmem_ulong_atomic_inc, \
        unsigned long long*: shmem_ulonglong_atomic_inc \
    )(__VA_ARGS__)

#define shmem_fadd(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_fadd, \
        long*: shmem_long_fadd, \
        long long*: shmem_longlong_fadd, \
        unsigned int*: shmem_uint_fadd, \
        unsigned long*: shmem_ulong_fadd, \
        unsigned long long*: shmem_ulonglong_fadd \
    )(__VA_ARGS__)

#define shmem_atomic_fetch_add(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_fetch_add, \
            long*: shmem_ctx_long_atomic_fetch_add, \
            long long*: shmem_ctx_longlong_atomic_fetch_add, \
            unsigned int*: shmem_ctx_uint_atomic_fetch_add, \
            unsigned long*: shmem_ctx_ulong_atomic_fetch_add, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_fetch_add, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_fetch_add, \
        long*: shmem_long_atomic_fetch_add, \
        long long*: shmem_longlong_atomic_fetch_add, \
        unsigned int*: shmem_uint_atomic_fetch_add, \
        unsigned long*: shmem_ulong_atomic_fetch_add, \
        unsigned long long*: shmem_ulonglong_atomic_fetch_add \
    )(__VA_ARGS__)

/* Atomics with extended AMO types */
#define shmem_swap(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_swap, \
        long*: shmem_long_swap, \
        long long*: shmem_longlong_swap, \
        unsigned int*: shmem_uint_swap, \
        unsigned long*: shmem_ulong_swap, \
        unsigned long long*: shmem_ulonglong_swap, \
        float*: shmem_float_swap, \
        double*: shmem_double_swap \
    )(__VA_ARGS__)

#define shmem_atomic_swap(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_swap, \
            long*: shmem_ctx_long_atomic_swap, \
            long long*: shmem_ctx_longlong_atomic_swap, \
            unsigned int*: shmem_ctx_uint_atomic_swap, \
            unsigned long*: shmem_ctx_ulong_atomic_swap, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_swap, \
            float*: shmem_ctx_float_atomic_swap, \
            double*: shmem_ctx_double_atomic_swap, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_swap, \
        long*: shmem_long_atomic_swap, \
        long long*: shmem_longlong_atomic_swap, \
        unsigned int*: shmem_uint_atomic_swap, \
        unsigned long*: shmem_ulong_atomic_swap, \
        unsigned long long*: shmem_ulonglong_atomic_swap, \
        float*: shmem_float_atomic_swap, \
        double*: shmem_double_atomic_swap \
    )(__VA_ARGS__)

#define shmem_fetch(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_fetch, \
        long*: shmem_long_fetch, \
        long long*: shmem_longlong_fetch, \
        unsigned int*: shmem_uint_fetch, \
        unsigned long*: shmem_ulong_fetch, \
        unsigned long long*: shmem_ulonglong_fetch, \
        float*: shmem_float_fetch, \
        double*: shmem_double_fetch, \
        const int*: shmem_int_fetch, \
        const long*: shmem_long_fetch, \
        const long long*: shmem_longlong_fetch, \
        const unsigned int*: shmem_uint_fetch, \
        const unsigned long*: shmem_ulong_fetch, \
        const unsigned long long*: shmem_ulonglong_fetch, \
        const float*: shmem_float_fetch, \
        const double*: shmem_double_fetch \
    )(__VA_ARGS__)

#define shmem_atomic_fetch(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_fetch, \
            long*: shmem_ctx_long_atomic_fetch, \
            long long*: shmem_ctx_longlong_atomic_fetch, \
            unsigned int*: shmem_ctx_uint_atomic_fetch, \
            unsigned long*: shmem_ctx_ulong_atomic_fetch, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_fetch, \
            float*: shmem_ctx_float_atomic_fetch, \
            double*: shmem_ctx_double_atomic_fetch, \
            const int*: shmem_ctx_int_atomic_fetch, \
            const long*: shmem_ctx_long_atomic_fetch, \
            const long long*: shmem_ctx_longlong_atomic_fetch, \
            const unsigned int*: shmem_ctx_uint_atomic_fetch, \
            const unsigned long*: shmem_ctx_ulong_atomic_fetch, \
            const unsigned long long*: shmem_ctx_ulonglong_atomic_fetch, \
            const float*: shmem_ctx_float_atomic_fetch, \
            const double*: shmem_ctx_double_atomic_fetch, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_fetch, \
        long*: shmem_long_atomic_fetch, \
        long long*: shmem_longlong_atomic_fetch, \
        unsigned int*: shmem_uint_atomic_fetch, \
        unsigned long*: shmem_ulong_atomic_fetch, \
        unsigned long long*: shmem_ulonglong_atomic_fetch, \
        float*: shmem_float_atomic_fetch, \
        double*: shmem_double_atomic_fetch, \
        const int*: shmem_int_atomic_fetch, \
        const long*: shmem_long_atomic_fetch, \
        const long long*: shmem_longlong_atomic_fetch, \
        const unsigned int*: shmem_uint_atomic_fetch, \
        const unsigned long*: shmem_ulong_atomic_fetch, \
        const unsigned long long*: shmem_ulonglong_atomic_fetch, \
        const float*: shmem_float_atomic_fetch, \
        const double*: shmem_double_atomic_fetch \
    )(__VA_ARGS__)


#define shmem_set(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        int*: shmem_int_set, \
        long*: shmem_long_set, \
        long long*: shmem_longlong_set, \
        unsigned int*: shmem_uint_set, \
        unsigned long*: shmem_ulong_set, \
        unsigned long long*: shmem_ulonglong_set, \
        float*: shmem_float_set, \
        double*: shmem_double_set \
    )(__VA_ARGS__)

#define shmem_atomic_set(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int*: shmem_ctx_int_atomic_set, \
            long*: shmem_ctx_long_atomic_set, \
            long long*: shmem_ctx_longlong_atomic_set, \
            unsigned int*: shmem_ctx_uint_atomic_set, \
            unsigned long*: shmem_ctx_ulong_atomic_set, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_set, \
            float*: shmem_ctx_float_atomic_set, \
            double*: shmem_ctx_double_atomic_set, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int*: shmem_int_atomic_set, \
        long*: shmem_long_atomic_set, \
        long long*: shmem_longlong_atomic_set, \
        unsigned int*: shmem_uint_atomic_set, \
        unsigned long*: shmem_ulong_atomic_set, \
        unsigned long long*: shmem_ulonglong_atomic_set, \
        float*: shmem_float_atomic_set, \
        double*: shmem_double_atomic_set \
    )(__VA_ARGS__)


/* Atomics with bitwise AMO types */
#define shmem_atomic_and(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int32_t*: shmem_ctx_int32_atomic_and, \
            int64_t*: shmem_ctx_int64_atomic_and, \
            unsigned int*: shmem_ctx_uint_atomic_and, \
            unsigned long*: shmem_ctx_ulong_atomic_and, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_and, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int32_t*: shmem_int32_atomic_and, \
        int64_t*: shmem_int64_atomic_and, \
        unsigned int*: shmem_uint_atomic_and, \
        unsigned long*: shmem_ulong_atomic_and, \
        unsigned long long*: shmem_ulonglong_atomic_and \
    )(__VA_ARGS__)

#define shmem_atomic_or(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int32_t*: shmem_ctx_int32_atomic_or, \
            int64_t*: shmem_ctx_int64_atomic_or, \
            unsigned int*: shmem_ctx_uint_atomic_or, \
            unsigned long*: shmem_ctx_ulong_atomic_or, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_or, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int32_t*: shmem_int32_atomic_or, \
        int64_t*: shmem_int64_atomic_or, \
        unsigned int*: shmem_uint_atomic_or, \
        unsigned long*: shmem_ulong_atomic_or, \
        unsigned long long*: shmem_ulonglong_atomic_or \
    )(__VA_ARGS__)

#define shmem_atomic_xor(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int32_t*: shmem_ctx_int32_atomic_xor, \
            int64_t*: shmem_ctx_int64_atomic_xor, \
            unsigned int*: shmem_ctx_uint_atomic_xor, \
            unsigned long*: shmem_ctx_ulong_atomic_xor, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_xor, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int32_t*: shmem_int32_atomic_xor, \
        int64_t*: shmem_int64_atomic_xor, \
        unsigned int*: shmem_uint_atomic_xor, \
        unsigned long*: shmem_ulong_atomic_xor, \
        unsigned long long*: shmem_ulonglong_atomic_xor \
    )(__VA_ARGS__)

#define shmem_atomic_fetch_and(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int32_t*: shmem_ctx_int32_atomic_fetch_and, \
            int64_t*: shmem_ctx_int64_atomic_fetch_and, \
            unsigned int*: shmem_ctx_uint_atomic_fetch_and, \
            unsigned long*: shmem_ctx_ulong_atomic_fetch_and, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_fetch_and, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int32_t*: shmem_int32_atomic_fetch_and, \
        int64_t*: shmem_int64_atomic_fetch_and, \
        unsigned int*: shmem_uint_atomic_fetch_and, \
        unsigned long*: shmem_ulong_atomic_fetch_and, \
        unsigned long long*: shmem_ulonglong_atomic_fetch_and \
    )(__VA_ARGS__)

#define shmem_atomic_fetch_or(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int32_t*: shmem_ctx_int32_atomic_fetch_or, \
            int64_t*: shmem_ctx_int64_atomic_fetch_or, \
            unsigned int*: shmem_ctx_uint_atomic_fetch_or, \
            unsigned long*: shmem_ctx_ulong_atomic_fetch_or, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_fetch_or, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int32_t*: shmem_int32_atomic_fetch_or, \
        int64_t*: shmem_int64_atomic_fetch_or, \
        unsigned int*: shmem_uint_atomic_fetch_or, \
        unsigned long*: shmem_ulong_atomic_fetch_or, \
        unsigned long long*: shmem_ulonglong_atomic_fetch_or \
    )(__VA_ARGS__)

#define shmem_atomic_fetch_xor(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        shmem_ctx_t: \
        _Generic(SHMEM_C11_TYPE_EVAL_PTR_OR_SCALAR(SHMEM_C11_ARG1(__VA_ARGS__)), \
            int32_t*: shmem_ctx_int32_atomic_fetch_xor, \
            int64_t*: shmem_ctx_int64_atomic_fetch_xor, \
            unsigned int*: shmem_ctx_uint_atomic_fetch_xor, \
            unsigned long*: shmem_ctx_ulong_atomic_fetch_xor, \
            unsigned long long*: shmem_ctx_ulonglong_atomic_fetch_xor, \
            default: shmem_ctx_c11_generic_selection_failed \
        ), \
        int32_t*: shmem_int32_atomic_fetch_xor, \
        int64_t*: shmem_int64_atomic_fetch_xor, \
        unsigned int*: shmem_uint_atomic_fetch_xor, \
        unsigned long*: shmem_ulong_atomic_fetch_xor, \
        unsigned long long*: shmem_ulonglong_atomic_fetch_xor \
    )(__VA_ARGS__)


/* Point-to-point synchronization */
#define shmem_wait_until(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        short*: shmem_short_wait_until, \
        int*: shmem_int_wait_until, \
        long*: shmem_long_wait_until, \
        long long*: shmem_longlong_wait_until, \
        unsigned short*: shmem_ushort_wait_until, \
        unsigned int*: shmem_uint_wait_until, \
        unsigned long*: shmem_ulong_wait_until, \
        unsigned long long*: shmem_ulonglong_wait_until \
    )(__VA_ARGS__)

#define shmem_test(...) \
    _Generic(SHMEM_C11_TYPE_EVAL_PTR(SHMEM_C11_ARG0(__VA_ARGS__)), \
        short*: shmem_short_test, \
        int*: shmem_int_test, \
        long*: shmem_long_test, \
        long long*: shmem_longlong_test, \
        unsigned short*: shmem_ushort_test, \
        unsigned int*: shmem_uint_test, \
        unsigned long*: shmem_ulong_test, \
        unsigned long long*: shmem_ulonglong_test \
    )(__VA_ARGS__)


#endif /* C11 */

#endif /* SHMEM_H */

