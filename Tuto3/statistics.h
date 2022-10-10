#ifndef _STATISTICS_H // To cause the current source file to be included only once in a single compilation
#define _STATISTICS_H
#include <vector>    // for data type vector
using namespace std; // for size_t, vector and cout
class standarđeviation
{
    private:
    size_val NumsCount; // number of numbers
    vector<double> nums; // data
    public:
    // constructor
    standardDeviation();
    void setNumsCount(size_t);
    void setData(vector<double>);
    
}