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

Date today()
{
    Date curdate;
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    curdate.year=tl.tm_year+1900;
    curdate.month=tl.tm_mon+1;
    curdate.day=tl.tm_mday;
    return curdate;
}

int main() {

        cout<<today().year<<" "<<today().month<<" "<<today().day<<"\n";
        return 0;

}