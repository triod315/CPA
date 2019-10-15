/*
 * CPA Lab 3.6.1 Modifying a function argument's value – how do we do it?
 * triod315, 13.10.2019
 */
#include <iostream>
using namespace std;

void increment(int &var,int i=1)
{
    var+=i;
}

int main(void) {
    int var = 0;
    for(int i = 0; i < 10; i++)
        if(i % 2)
            increment(var);
        else
            increment(var,i);
    cout << var << endl;
    return 0;
}