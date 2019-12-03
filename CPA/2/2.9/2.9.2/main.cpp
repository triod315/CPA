/*
 * Lab 2.9.2 Collecting banknotes
 * triod315, 12.10.2019
 */
#include <iostream>
#include <vector>
using namespace std;

void doIt(int n,int value)
{
    for (int i=0;i<n;i++)
        cout<<value<<" ";
}

int main() {
    int sum;
    cin>>sum;

    int count50=sum/50;
    int count20=(sum%50)/20;
    int count10=((sum%50)%20)/10;
    int count5=(((sum%50)%20)%10)/5;
    int count1=(((sum%50)%20)%10)%5;

    doIt(count50,50);
    doIt(count20,20);
    doIt(count10,10);
    doIt(count5,5);
    doIt(count1,1);


    return 0;
}