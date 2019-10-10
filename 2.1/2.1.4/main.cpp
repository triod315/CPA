/*
 * CPA Lab 2.1.4 Some actual evaluations - finding day of week
 * triod315, 8.10.2019
 */
#include <iostream>
using namespace std;
int main() {
    int yearNumber;
    int monthNumber;
    int dayNumber;

    cin>>yearNumber>>monthNumber>>dayNumber;

    monthNumber-=2;
    if (monthNumber<=0)
    {
        monthNumber+=15;
        yearNumber-=1;
    }
    monthNumber=monthNumber*83/32+dayNumber+yearNumber+yearNumber/4-yearNumber/100+yearNumber/400;
    int weeklyDay=monthNumber%7;
    cout<<weeklyDay;
    return 0;
}