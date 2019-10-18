/**
 *  CPA: Lab 5.1.1 Classes and Objects in C++
 *  triod315, 18.10.2019
 */

#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int phoneNumber;
};
void print(Person* person)
{
    cout << person->name << " is "<< person->age << " years old, phone: " <<person->phoneNumber<< endl;
}
int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.phoneNumber=123456;
    cout << "Meet ";
    print(&person);
    // Your code here
return 0;
}
