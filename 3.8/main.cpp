/*
 * CPA Lab 3.8.1 Overloading functions
 * triod315, 13.10.2019
 */
#include <iostream>
#include <cmath>
using namespace std;

void increment(int &var,int i=1)
{
    var+=i;
}

void increment(float &var,int i=1)
{
    var+=i;
}

int main(void) {
    int intvar = 0;
    float floatvar = 1.5;
    for(int i = 0; i < 10; i++)
        if(i % 2) {
            increment(intvar);
            increment(floatvar, sqrt(intvar));
        }
        else {
            increment(intvar,i);
            increment(floatvar);
        }
    cout << intvar * floatvar << endl;
    return 0;
}