/*
 * CPA Lab 3.2.2 Matrices and pointers – a step inside
 * triod315, 13.10.2019
 */
#include <iostream>
using namespace std;
int main(void) {
    int matrix[10][10] = { };

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            *(*(matrix+i)+j)=(i+1)*(j+1);
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}