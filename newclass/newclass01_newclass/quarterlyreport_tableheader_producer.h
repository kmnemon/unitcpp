#ifndef QUARTERLY_HEADER_H
#define QUARTERLY_HEADER_H
#include <iostream>

using namespace std;

class QuarterlyReportTableHeaderProducer
{
public:
    string makeHeader();
};


string QuarterlyReportTableHeaderProducer::makeHeader()
{
    return "<tr><td>Department</td><td>Manager</td><td>Profit</td><td>Expenses</td>";
}

#endif