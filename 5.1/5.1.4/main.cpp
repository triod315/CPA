/**
 * CPA: Lab 5.1.4 Classes and objects: ShopItemOrder
 * triod315, 18.10.2019
 */
#include <iostream>
#include <string>
using namespace std;

class ShopItemOrder
{
private:
    string name;
public:
    ShopItemOrder(string &name, double unit_price, int number_of_items) : name(name),unit_price(unit_price),number_of_items(number_of_items) {}

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        ShopItemOrder::name = name;
    }

private:
    double unit_price;
public:
    double getUnitPrice() const {
        return unit_price;
    }

    void setUnitPrice(double unitPrice) {
        unit_price = unitPrice;
    }

private:
    int number_of_items;
public:
    int getNumberOfItems() const {
        return number_of_items;
    }

    void setNumberOfItems(int numberOfItems) {
        number_of_items = numberOfItems;
    }

public:
    void print()
    {
        cout<<"Order "<<name<<"\t unit price: "<<unit_price<<"\t Number of items: "<<number_of_items<<"\tTotal price: "<<getTotalPrice()<<endl;
    }

    double getTotalPrice()
    {
        return unit_price*number_of_items;
    }

};

int main() {


    string name="Order1";
    ShopItemOrder itemOrder(name,5,8);

    itemOrder.print();

    itemOrder.setUnitPrice(9);
    itemOrder.print();
    return 0;
}