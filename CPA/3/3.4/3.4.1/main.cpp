/*
 * CPA Lab 3.4.1 Old problems, new methods: functions
 * triod315, 13.10.2019
 */
#include <iostream>
using namespace std;
bool isLeap(int year) {
    if (year%4!=0)
        return false;
    else
        if (year%100!=0)
            return true;
        else
            if (year%400!=0)
                return false;
            else
                return true;
}
int main(void) {
    for(int yr = 1995; yr < 2017; yr++)
        cout << yr << " -> " << isLeap(yr) << endl;
    return 0;
}