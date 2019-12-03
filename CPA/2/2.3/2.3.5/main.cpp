/*
 * Lab 2.3.5 Drawing squares (actually: rectangles)
 * triod315, 10.10.2019
 */
#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
using namespace std;
int main(void) {
    int n;
    cin>>n;

    if (n<1)
    {
        cout <<"N is too low"<<endl;
        return 0;
    }


    if (n>24)
    {
        cout<<"Sorry, the side size is too big"<<endl;
        return 0;
    }

    cout << '+';
    n-=2;
    for(int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;
    for(int i = 0; i < n; i++) {
        cout << '|';
        for(int j = 0; j < n; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for(int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;
    return 0;
}