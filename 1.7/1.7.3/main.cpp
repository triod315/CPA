/*
 * CPA Lab 1.7.3 Getting input from user
 * triod315, 8.10.2019
 */
#include <iostream>

bool checkNumber(int number)
{
    return (number>=0 && number<256);
}

int main() {
    short a,b,c,d;
    std::cin>>a>>b>>c>>d;
    if (checkNumber(a)&&checkNumber(b)&&checkNumber(c)&&checkNumber(d))
        printf("%d.%d.%d.%d",a,b,c,d);
    else
        std::cout<<"Wrong number";

    return 0;
}