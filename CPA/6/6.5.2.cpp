#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Engine
{
private:
    double volume;
public:
    double get_volume()
    {
        return volume;
    }
    void print()
    {
        cout << "Engine: " << get_volume();
    }
    Engine(double v)
    {
        volume = (v >= 0.5) ? v : 0.5;
    }
    Engine(){}
};
class Wheel
{
private:
    int diametr;
public:
    int get_diametr()
    {
        return diametr;
    }
    void print()
    {
        cout << "Wheel: " << get_diametr() << " inches";
    }
    Wheel(int d)
    {
        diametr = (d >= 9) ? d : 9;
    }
    Wheel(){}
};
class Chassis
{
private:
    string type;
public:
    string get_type()
    {
        return  type;
    }
    void print()
    {
        cout << "Chassis: " << get_type();
    }
    Chassis(string t)
    {
        if (t == "Normal" || t == "Anormal")
            type = t;
        else
            type = "Normal";
    }
    Chassis(){}
};
class Light
{
private:
    int type;
public:
    int get_type()
    {
        return type;
    }
    void print()
    {
        cout << "Light: Type " << get_type();
    }
    Light(int t)
    {
        type = type;
    }
    Light()
    {}
};
class Body
{
private:
    string color;
public:
    string get_color()
    {
        return color;
    }
    void print()
    {
        cout << "Body: " << get_color();
    }
    Body(string c)
    {
        if (c == "Black" || c == "White" || c == "Red" || c == "Yellow" || c == "Green" || c == "Blue")
            color = c;
        else
            color = "Black";
    }
    Body() {}
};
class Car
{
private:
    Engine engine;
    Wheel* wheels;
    Chassis chassis;
    Light* lights;
    Body body;
public:
    Car(Engine eng, Wheel whs[4], Chassis ch, Light lghs[10], Body bd)
    {
        engine = eng;
        wheels = whs;
        chassis = ch;
        lights = lghs;
        body = bd;
    }
    void print()
    {
        engine.print();
        for (int i = 0; i < 4; i++)
        {
            wheels[i].print();
        }
        chassis.print();
        for (int i = 0; i < 10; i++)
        {
            lights[i].print();
        }
        body.print();
    }
};

int main()
{

    Wheel whs[4] = {Wheel(16), Wheel(16), Wheel(16), Wheel(16)};
    Light lghs[10] = {Light(), Light(), Light(), Light(), Light(), Light(),Light(), Light(), Light(),Light()};
    Car car(Engine(1.0), whs, Chassis("Normal"), lghs, Body("White"));
    car.print();

    return 0;
}
