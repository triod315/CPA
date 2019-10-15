/*
 * CPA Lab 3.4.4 Third step further – counting the days
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

int daysBetween(Date d1, Date d2) {
    int daysCount=0;
    for (int i=d1.year;i<d2.year;i++)
    {
        Date date;
        date.year=i;
        date.month=12;
        date.day=31;

        daysCount+=dayOfYear(date);
    }

    int minusDays=0;
    for (int i=1;i<d1.month;i++)
    {
        daysCount-=monthLength(d1.year,i);
    }

    for (int i=1;i<d2.month;i++)
    {
        daysCount+=monthLength(d2.year,i);
    }

    daysCount=daysCount-d1.day+d2.day;
    return daysCount;
}

int main(void) {
    Date since,till;
    cout << "Enter first date (y m d): ";
    cin >> since.year >> since.month >> since.day;
    cout << "Enter second date (y m d): ";
    cin >> till.year >> till.month >> till.day;
    cout << daysBetween(since,till) << endl;
    return 0;
}