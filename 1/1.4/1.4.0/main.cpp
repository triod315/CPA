/*
 * CPA Lab 1.4.2 Parentheses
 * triod315, 8.10.2019
 */
#include <iostream>
#include <string>
int main()
{
    float v=2;
    float result = v + 1 * 2;
    std::cout << "result: " << result << " expected result : 4" << std::endl;
    result = (v + 1 )* v + 2 * 2;
    std::cout << "result: " << result << " expected result : 10" << std::endl;
    result = v - (1 * 2 + 2) * 2;
    std::cout << "result: " << result << " expected result : -6" << std::endl;
    result = v + v * (v + v * 2);
    std::cout << "result: " << result << " expected result : 14" << std::endl;
    result = (int)v % 2 * v + 2 * 2;
    std::cout << "result: " << result << " expected result : 4" << std::endl;
}