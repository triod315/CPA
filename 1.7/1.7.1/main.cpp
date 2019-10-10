/*
 * CPA Lab 1.7.1 Printing data
 * triod315, 8.10.2019
 */
#include <iostream>
#include <stdio.h>
int main() {

    float varNorm,varTwoNumbersExt,varFull,varTwoNumb,varInt;
    std::cin>>varNorm>>varTwoNumbersExt>>varFull>>varTwoNumb>>varInt;
    printf("%.1f\n%.2f\n%f\n%.2f\n%.f",varNorm,varTwoNumbersExt,varFull,varTwoNumb,varInt);
    return 0;
}