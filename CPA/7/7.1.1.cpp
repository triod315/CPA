#include <iostream>

using namespace std;

int main(void)
{
    int a = 8, b = 0, c = 0;
    cin >> b;
    try
    {
        if (b == 0)
            throw "Divide by zero";
        c = a / b;
    }
    catch (...)
    {
        cout << "Your input is not valid, you can't divide by zero \n";
    }
    cout << c << endl;


    return 0;
}
