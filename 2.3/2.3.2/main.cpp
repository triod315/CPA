/*
 * Lab 2.3.2 Some actualevaluations – finding the value of π
 * triod315, 10.10.2019
 */
#include <iostream>
using namespace std;

int main(void) {
    double pi4 = 0.;
    long n;
    cout << "Number of iterations? ";
    cin >> n;

    for (long i=1;i<=n;i++){
        pi4+=(i % 2 != 0)?1. / (2 * i - 1):-1. / (2 * i - 1);
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}