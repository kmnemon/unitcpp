#include <iostream>

#include "c_async_ssl_rec.h"

using namespace std;

void PostReceiveError(){
    cout<<"post receive"<<endl;
    //...
}

bool CAsyncSslRec::Init(){
    if(sslInitialized){
        return true;
    }

    //smutex.Unlock()();
    //nSslRefCount++
    //..

    if(!failureSend){
        failureSend = true;
        PostReceiveError();
    }

    //..

    return true;
}


