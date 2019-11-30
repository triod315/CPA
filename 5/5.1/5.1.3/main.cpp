/**
 * CPA: Lab 5.1.3 Obtaining derived data from an object
 * triod315, 18.10.2019
 */
#include <iostream>
using namespace std;
class AdHocSquare
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
};

void AdHocSquare::set_side(double side) {
    this->side=side;
}

double AdHocSquare::get_area() {
    return side*side;
}

AdHocSquare::AdHocSquare(double side) {
    this->side=side;
}

class LazySquare
{
public:
    LazySquare(double side) {
        side_changed=true;
        this->side=side;
    }

    void set_side(double side) {
        side_changed=true;
        this->side=side;
    }

    double get_area() {
        if(side_changed)
        {
            area=side*side;
            side_changed= false;
        }
        return area;
    }

private:
    double side;
    double area;
    bool side_changed;
};

int main() {
    LazySquare lazySquare(5);
    cout<<lazySquare.get_area();
    return 0;
}