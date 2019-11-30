#include <iostream>
using namespace std;

typedef struct time{
    int hour;
    int minute;
} Time;

int main() {
    int duration;
    Time start;
    cin>>start.hour>>start.minute>>duration;

    Time end;

    end.minute=start.minute+duration%60;
    end.hour=(start.hour+duration/60+end.minute/60)%24;
    end.minute%=60;


    cout<<end.hour<<":"<<end.minute;
    return 0;
}