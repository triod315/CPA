/*
 * CPA Lab 1.4.2 Your first program
 * triod315, 8.10.2019
 */
#include <iostream>

using namespace std;
int main(void) {
    int i, j, k;
    cout << "Enter i: ";
    cin >> i;
    cout << "Enter j: ";
    cin >> j;
// increment i by 2
    i+=2;
// decrement j by i
    j-=i;
// divide i by j giving k
    k=i/j;
// increment k by k
    k+=k;
// decrement k by 1
    k--;
// assign k modulo i to j
    j=k%i;
// increment k by k added to i
    k+=k+i;
// increment k by k divided by j
    k+=k/j;
// assign k times k times k to k
    k=k*k*k;
// increment k by i times j
    k+=i*j;
    cout << k;
    return 0;
}