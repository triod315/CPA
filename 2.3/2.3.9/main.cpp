/*
 * Lab 2.3.9 The riddle (a bit of a tricky one)
 * triod315, 10.10.2019
 */

#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int diff=4;
    int res=5;
    for (int i=3;i<n;i++)
    {
        if (i%2!=0)
        {
            diff+=8;
            res+=diff;
        }
    }
    cout<<res;
    return 0;
}