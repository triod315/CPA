/*
 * Lab 2.3.1 Collatz's hypothesis
 * triod315, 10.10.2019
 */
#include <iostream>
using namespace std;
int main() {
    int c0;
    cin>>c0;

    int counter=0;

    while (c0!=1)
    {
        if (c0%2==0)
            c0/=2;
        else
            c0=3*c0+1;
        counter-=-1;
        cout<<c0<<endl;
    }

    cout<<"steps = "<<counter<<endl;

    return 0;
}