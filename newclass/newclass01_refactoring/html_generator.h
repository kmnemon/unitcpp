#ifndef HTML_GENERATOR_H
#define HTML_GENERATOR_H

#include <iostream>

using namespace std;

class HTMLGenerator
{
public:
    virtual ~HTMLGenerator() = 0;
    virtual string generate() = 0;
};

#endif