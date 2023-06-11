#ifndef C_ASYNC_SSL_REC_H
#define C_ASYNC_SSL_REC_H

class CAsyncSslRec{
public:
    CAsyncSslRec(){
        sslInitialized = false;
        failureSend = false;
    }

    bool Init();

    virtual void PostReceiveError();

private:
    bool sslInitialized;
    bool failureSend;
};





#endif