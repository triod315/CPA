/*
 * CPA Lab 2.1.1 Essentials of if-else statement
 * triod315, 8.10.2019
 */
#include <iostream>
using namespace std;
int main(void) {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year%4!=0)
        cout<<"Common year\n";
    else
        if (year%100!=0)
            cout<<"Leap year\n";
        else
            if (year%400!=0)
                cout<<"Common year\n";
            else
                cout<<"Leap year\n";
    return 0;
}