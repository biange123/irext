/**************************************************************************************************
Filename:       irda_utils.c
Revised:        Date: 2015-08-26
Revision:       Revision: 1.0

Description:    This file provides generic utils for UCON IRDA algorithms

Copyright 2014-2016 UCON Tech all rights reserved

Revision log:
* 2015-08-01: created by strawmanbobi
**************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "irda_utils.h"
#include "ucon_decode.h"

/*
*0123456789abcdef/0123456789ABCDEF
*/
UINT8 char_to_hex(char chr)
{
    UINT8 value = 0;
    if (chr >= '0' && chr <= '9')
        value = chr - '0';
    if (chr >= 'a' && chr <= 'f')
        value = chr - 'a' + 10;
    if (chr >= 'A' && chr <= 'F')
        value = chr - 'A' + 10;
    return value;
}

UINT8 chars_to_hex(UINT8 *p)
{
    return (char_to_hex(*p) << 4) + char_to_hex(*(p + 1));
}

void string_to_hex_common(UINT8 *p, UINT8 *hex_data, UINT16 len)
{
    // in condition of hex_code is already assigned
    UINT16 i = 0;

    for (i = 0; i < len; i++)
    {
        hex_data[i] = chars_to_hex(p);
        p = p + 2;
    }
}

void string_to_hex(UINT8 *p, ac_hex *pac_hex, UINT16 len)
{
    UINT8 i = 0;

    pac_hex->len = chars_to_hex(p);
    p = p + 2;
    for (i = 0; i < pac_hex->len; i++)
    {
        pac_hex->data[i] = chars_to_hex(p);
        p = p + 2;
    }
}

char hex_half_byte_to_single_char(UINT8 length, UINT8 half_byte)
{
    if (1 != length || half_byte >= 16)
    {
        return '0';
    }
    if (half_byte >= 10 && half_byte < 16)
    {
        return (half_byte - 10 + 0x41);
    }
    else
    {
        return half_byte + 0x30;
    }
}

void hex_byte_to_double_char(char* dest, UINT8 length, UINT8 src)
{
    UINT8 hi_num = 0;
    UINT8 lo_num = 0;
    if (NULL == dest || 2 != length)
    {
        return;
    }
    hi_num = (src >> 4) & 0x0F;
    lo_num = src & 0x0F;

    dest[0] = hex_half_byte_to_single_char(1, hi_num);
    dest[1] = hex_half_byte_to_single_char(1, lo_num);
}

BOOL isin(UINT8 array[], UINT8 value, UINT8 len)
{
    UINT16 i = 0;
    for(i = 0; i < len; i++)
    {
        if(array[i] == value)
        {
            return TRUE;
        }
    }
    return FALSE;
}