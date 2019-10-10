/*
 * CPA Lab 1.7.2 Near zero float numbers
 * triod315, 8.10.2019
 */
#include <iostream>
#include "math.h"

int main() {
    int a,b;
    float epsilon=0.000001;
    std::cin>>a>>b;
    if (abs((float)a/b-1)<=epsilon)
        std::cout<< "Results are equal (by 0.000001 epsilon)";
    else
        std::cout<<"Results are not equal (by 0.000001 epsilon)";
    return 0;
}