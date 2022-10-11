#ifndef _STATISTICS_H
#define _STATISTICS_H
#include <vector>
using namespace std;
class standard_deviation
{
    private:
    size_val NumsCount; // number of numbers
    vector<double> nums; // data
    public:
    // constructor
    standardDeviation();
    void setNumsCount(size_t);
    void setData(vector<double>);
    size_t getNumbersCount();
    double mean(double number);
    double mean(double n1, double n2);
    double mean(double n1, double n2, double n3);
    double mean(double n1, double n2, double n3, double n4);
    double mean(vector<double>);
    double variance(double number);
    double variance(double n1, double n2);
    double variance(double n1, double n2, double n3);
    double variance(double n1, double n2, double n3, double n4);
    double variance(vector<double>);
    double standardDeviation(double number);
}