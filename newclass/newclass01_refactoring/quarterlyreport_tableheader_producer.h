#ifndef QUARTERLY_HEADER_H
#define QUARTERLY_HEADER_H
#include <iostream>
#include "html_generator.h"

using namespace std;

class QuarterlyReportTableHeaderProducer : public HTMLGenerator
{
public:
    string generate();
};


string QuarterlyReportTableHeaderProducer::generate()
{
    return "<tr><td>Department</td><td>Manager</td><td>Profit</td><td>Expenses</td>";
}

#endif