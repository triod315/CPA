/*
 * CPA Lab 2.11.2 Times and durations
 * triod315, 8.10.2019
 */
#include <iostream>
using namespace std;

typedef struct time{
    int hour;
    int minute;
} Time;

int main() {
    Time start,end;
    cin>>start.hour>>start.minute>>end.hour>>end.minute;

    if (start.hour>end.hour || (start.hour==end.hour && end.minute>start.minute))
    {
        cout<<"Incorrect time\n";
        return 0;
    }

    Time duration;
    duration.hour=end.hour-start.hour;
    duration.minute=end.minute-start.minute;
    if (duration.minute<0)
    {
        duration.hour--;
        duration.minute+=60;
    }

    cout<<duration.hour<<":"<<duration.minute<<endl;

    return 0;
}