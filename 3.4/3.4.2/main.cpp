/*
 * CPA Lab 3.4.2 One step further: finding the lengths of months
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
int monthLength(int year, int month) {
    if( month == 2)
    {
        if(isLeap(year))
            return 29;
        else
            return 28;
    }
        
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
            ||month == 10 || month==12)
        return 31;
    else
        return 30;
}
int main(void) {
    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr,mo) << " ";
        cout << endl;
    }
    return 0;
}