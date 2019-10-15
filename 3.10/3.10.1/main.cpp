/*
 * CPA Lab 3.10.1 Using pseudorandom values - a little lottery
 * triod315, 13.10.2019
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool contains(int * arr,int value)
{
    bool flag=false;

    for (int i=0; i < sizeof(arr)/sizeof(int);i++)
    {
        if (value==arr[i]) flag= true;
    }
}

int main(void) {
    int maxball;
    int ballsno;
    cout << "Max ball number? ";
    cin >> maxball;
    cout << "How many balls? ";
    cin >> ballsno;
    srand(time(NULL));
// Insert your code here

    int *balls=new int[ballsno];

    for (int i=0;i<ballsno;i++)
    {
        int randValue = rand() % maxball + 1;
        if (!contains(balls,randValue))
            balls[i]=randValue;
        else
            {
                i--;
                continue;
            }

        cout<<balls[i]<<" ";
    }


    delete[] balls;


    return 0;
}