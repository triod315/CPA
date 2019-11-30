/*
 * CPA Lab 4.2.1 Range of integer types
 * triod315, 13.10.2019
 */
#include <iostream>
using namespace std;
int main() {

    int n;
    unsigned long long number=0;

    cin>>n;



    for (int i=1;i<=n;i++)
        number+=i;

    cout<<number;

    return 0;
}