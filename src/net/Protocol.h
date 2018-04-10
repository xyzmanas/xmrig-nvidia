#ifndef __PROTOCOL_H__
#define __PROTOCOL_H__

class NOTI 
{
public:
    static const int JOB_ID = 0;
    static const int BLOB = 1;
    static const int TARGET = 2;
};

class LEN
{
public:
    static const int BLOB = 128;
    static const int NONCE = 16;
    static const int DIFF = 4;
    static const int RESULT = 64;
};
#endif