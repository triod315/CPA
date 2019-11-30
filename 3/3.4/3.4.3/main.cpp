/*
 * CPA Lab 3.4.3 Second step further: finding day of year
 * triod315, 13.10.2019
 */
#include <iostream>
using namespace std;
struct Date {
    int year;
    int month;
    int day;
};
bool isLeap(int year) {
    if (year%4!=0)
        return false;
    else
        if (year%100!=0)
            return true;
        else
            return year % 400 == 0;
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
int dayOfYear(Date date) {
    int sum=0;

    for (int i=1;i<date.month;i++)
    {
        sum+=monthLength(date.year,i);
    }

    sum+=date.day;

    return sum;
}
int main(void) {
    Date d;
    cout << "Enter year month day: ";
    cin >> d.year >> d.month >> d.day;
    cout << dayOfYear(d) << endl;
    return 0;
}