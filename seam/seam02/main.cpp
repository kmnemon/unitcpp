#include <iostream>

#include "c_async_ssl_rec.h"
#include "testing_acync_ssl_rec.h"

using namespace std;


int main(){
    CAsyncSslRec *c = new CAsyncSslRec();
    c->Init();

    CAsyncSslRec *c1 = new TestingAsyncSslRec();
    c1->Init();
}