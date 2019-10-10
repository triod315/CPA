/*
 * CPA Lab 2.1.2 Some actual evaluations - taxes
 * triod315, 8.10.2019
 */
#include <iostream>

using namespace std;
int main(void) {
    float grossprice, taxrate, netprice, taxvalue;
    cout << "Enter a gross price: ";
    cin >> grossprice;
    cout << "Enter a tax rate: ";
    cin >> taxrate;
// Insert you code here
    netprice=grossprice/(taxrate/100+1);
    taxvalue=netprice*taxrate/100;

    cout << "Net price: " << netprice << endl;
    cout << "Tax value: " << taxvalue << endl;
    return 0;
}