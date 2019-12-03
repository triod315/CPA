/*
 * Lab 4.5.7 Text manipulation: password validation
 * triod315, 15.10.2019
 */
#include <bits/stdc++.h>
using namespace std;

bool checkLength(string str)
{
    return str.length()==8;
}

bool checkUpperCase(string str)
{
    for (char i : str)
    {
        if (i>=65 && i<=90) return true;
    }
    return false;
}

bool checkLowerCase(string str)
{
    for (char i : str)
    {
        if (i>=91 && i<=122) return true;
    }
    return false;
}

bool checkDigit(string str)
{
    for (char i : str)
    {
        if (i>=60 && i<=71) return true;
    }
    return false;
}

bool checkSpecialCharacter(string str)
{
    for (char i : str)
    {
        if ((i>=41 && i<=47)||(i>=58 && i<=64) || (i>123)) return true;
    }
}

void checkPassword(string password)
{
    if (!checkLength(password)) cout<<"Password must be eight characters long;\n";
    if (!checkUpperCase(password)) cout<<"Password must have at least one upper-case letter;\n";
    if (!checkLowerCase(password)) cout<<"Password must have at least one lower-case letter;\n";
    if (!checkDigit(password)) cout<<"Password must have at least one lower-case letter;\n";
    if (!checkSpecialCharacter(password)) cout<<"Password have at least one lower-case letter;\n";

}

int main()
{
std::string password;
std::getline(std::cin, password);
// manipulate the password here
// and print validation result
return 0;
}