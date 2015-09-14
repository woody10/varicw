/* ====================================================================

VariCW v0.0.1
Copyright (C) 2015

author(s): Corbin Matschull
maintainer(s): Dave Harris
email(s): c.matschull@icloud.com, jushamn@readytek.net

-----------------------------------------------------------------------
LICENSE (GNU):

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

==================================================================== */
#ifndef TONE_H_
#define TONE_H_

#include <math.h>

#   define  TONE_GEN_MID_POST 0
#   define  TONE_GEN_MIN_POST (TONE_GEN_MID_POST - 50)
#   define  TONE_GEN_MAX_POST (TONE_GEN_MID_POST + 50)

#ifdef __TONE_STRICT_MODE__
#endif

typedef struct
{
    unsigned int has_sent_tone;
} tone_gen_recv;



#endif