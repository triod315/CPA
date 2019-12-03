#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Matrix
{
public:
    int** matrix;
    Matrix()
    {
        this->matrix = new int*[2];
        this->matrix[0] = new int[2];
        this->matrix[1] = new int[2];
    }
};
ostream& operator << (ostream &os, const Matrix& m)
{
    os << m.matrix[0][0] << " " << m.matrix[0][1] << endl << m.matrix[1][0] << " " << m.matrix[1][1] << endl;
    return os;
}
istream& operator >> (istream &is, Matrix& m)
{
    is >> m.matrix[0][0] >> m.matrix[0][1] >> m.matrix[1][0] >> m.matrix[1][1];
    return is;
}


int main()
{
    Matrix matrix;
    cout << "Enter values of matrix: ";
    cin >> matrix;
    cout << "Result: \n";
    cout << matrix;

    return 0;
}
