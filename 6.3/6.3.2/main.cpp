/**
 * CPA: Lab 6.3.1 Polymorphism: part 1
 * triod315, 21.10.19
 */
#include <iostream>

struct Position{
    char x;
    int y;
};
class Piece{
public:
    bool check();
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}