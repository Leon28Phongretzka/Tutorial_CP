#ifndef _STATISTICS_H
#define _STATISTICS_H

#include <vector>
using namespace std;
class standardDeviation
{
private:
    size_t numbersCount;
    vector<double> data;

public:
    // constructor
    standardDeviation();                                                             
    void setNumbersCount(size_t);                                                    
    void Data(vector<double>);                                                    
    vector<double> getData();                                                        
    size_t getNumbersCount();                                                        
    double mean(double number);                                                      
    double mean(double number1, double number2);                                     
    double mean(double number1, double number2, double number3);                    
    double mean(double number1, double number2, double number3, double number4);    
    double mean(vector<double>);                                                     
    double variance(double number);                                                  
    double variance(double number1, double number2);                                 
    double variance(double number1, double number2, double number3);                 
    double variance(double number1, double number2, double number3, double number4); 
    double variance(vector<double>);
    // destructor 
    ~standardDeviation();                                                            
};

#endif