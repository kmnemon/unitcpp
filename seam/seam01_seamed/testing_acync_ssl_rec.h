#ifndef TESTING_C_ASYNC_SSL_REC_H
#define TESTING_C_ASYNC_SSL_REC_H
#include "c_async_ssl_rec.h"

#include <iostream>

using namespace std;

class TestingAsyncSslRec : public CAsyncSslRec{
public:
    virtual void PostReceiveError(){
        cout<<"testing post recivie"<<endl;
    }
};


#endif