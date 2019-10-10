/*
 * CPA Lab 1.4.1 Floats: operators and expressions
 * triod315, 8.10.2019
 */
#include <iostream>
#include <math.h>

using namespace std;
int main(void) {
    float pi = 3.14159265359;
    float x,y;
    cout << "Enter value for x: ";
    cin >> x;

    y=x*x/(pi*pi*(x*x+1./2))*(1+x*x/(pi*pi*pow((x*x-1./2),2)));
    cout << "y = " << y;
    return 0;
}