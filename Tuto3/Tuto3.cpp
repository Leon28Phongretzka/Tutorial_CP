#include<iostream>
#include"statistics.h"
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
void solve()
{
    standard_deviation sd;
    ll count;
    vector<double> data;
    double num;
    // Get the number in the data set
    cout << "Enter the number of data set: ";
    cin >> count;
    sd.setNumsCount(count);
    // Get the data set
    cout << "Enter the data set: ";
    for (int i = 0; i < count; i++)
    {
        cin >> num;
        data.push_back(num);
    }
    sd.setData(data);
    // Mean and Variance of the data set
    if(count==1)
    {
        cout << sd.mean(sd.getData()[0]) << endl;
        cout << sd.variance(sd.getData()[0]) << endl;
    }
    else if(count==2)
    {
        cout << sd.mean(sd.getData()[0], sd.getData()[1]) << endl;
        cout << sd.mean(sd.getData()[0], sd.getData()[1]) << endl;
    }
    else if(count==3)
    {
        cout << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2]) << endl;
        cout << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2]) << endl;
    }
    else if(count==4)
    {
        cout << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2], sd.getData()[3]) << endl;
        cout << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2], sd.getData()[3]) << endl;
    }
    else
    {
        cout << sd.mean(sd.getData()) << endl;
        cout << sd.mean(sd.getData()) << endl;
    }
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // ll tt; cin >> tt; while(tt--) {solve();}
    solve();
}