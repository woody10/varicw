#ifndef TONE_H_
#define TONE_H_

#   define  TONE_GEN_MID_POST 0
#   define  TONE_GEN_MIN_POST (TONE_GEN_MID_POST - 50)
#   define  TONE_GEN_MAX_POST (TONE_GEN_MID_POST + 50)

typedef struct
{
    unsigned int has_sent_tone;
} tone_gen_recv;

class ToneGen
{

};


#endif