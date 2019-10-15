/*
 * CPA Lab 3.2.1 Vectors and pointers: first try
 * triod315, 8.10.2019
 */
#include <iostream>

using namespace std;
int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    
    for (int i=0;i<n;i++)
    {
        cout<<*(vector+i)<<" ";
    }
    return 0;
}