/*
 * Lab 2.4.1 Counting bits (the ones)
 * triod315, 10.10.2019
 */
#include <iostream>
using namespace std;
int main() {

    int count=0;
    unsigned long long n;

    cin>>n;

    while (n)
    {
        count+=n & 1;
        n>>=1;
    }

    cout<<count;

    return 0;
}