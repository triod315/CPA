/*
 * Lab 2.3.8 Do it yourself: factorials
 * triod315, 10.10.2019
 */
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    unsigned long long result=1;

    for (int i=2;i<=n;i++){
        result*=i;
    }
    cout<<result;
    return 0;
}