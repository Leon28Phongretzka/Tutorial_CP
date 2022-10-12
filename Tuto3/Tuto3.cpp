#include <bits/stdc++.h>
#include "statistics.cpp"
int main()
{
    // declare variables
    standardDeviation sd;
    long long count;
    vector<double> dataSet;
    double number;
    // get the number of numbers in the data set
    cout << "Enter the number of numbers in the data set: " << endl;
    cin >> count;
    // get the numbers in the data set
    sd.setNumbersCount(count);

    // get the data set
    cout << "Enter the numbers in the data set: ";
    for (size_t i = 0; i < count; i++)
    {
        cin >> number;
        dataSet.push_back(number);
    }
    sd.Data(dataSet);
    // calculate the mean and variance of the data set
    if(count==1)
    {
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0]) << endl;
    }
    else if(count==2)
    {
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0], sd.getData()[1]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0], sd.getData()[1]) << endl;
    }
    else if(count==3)
    {
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0], sd.getData()[1], sd.getData()[2]) << endl;
    }
    else if(count==4)
    {
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2], sd.getData()[3]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0], sd.getData()[1], sd.getData()[2], sd.getData()[3]) << endl;
    }
    else
    {
        cout << "The mean of the data set is: " << sd.mean(dataSet) << endl;
        cout << "The variance of the data set is: " << sd.variance(dataSet) << endl;
    }
    return 0;
}