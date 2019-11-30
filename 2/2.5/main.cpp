/*
 * Lab 2.5.1 A realand usable calculator
 * triod315, 12.10.2019
 */
#include <iostream>
using namespace std;
int main() {
    int choice;
    double a,b;
    while (1)
    {
    cout<<"\nMENU:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice? "<<endl;

    cin >>choice;

    cout<<"write a and b\n";
    cin>>a>>b;
    switch (choice) {
        case 0:
            return 0;
            break;
        case 1:
            cout<<a<<"+"<<b<<"="<<a+b;
            break;
        case 2:
            cout<<a<<"-"<<b<<"="<<a-b;
            break;
        case 3:
            cout<<a<<"*"<<b<<"="<<a*b;
            break;
        case 4:
            cout<<a<<"/"<<b<<"="<<a/b;
            break;
    }
    }

    return 0;
}