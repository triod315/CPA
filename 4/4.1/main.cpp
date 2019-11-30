/*
 * CPA Lab 4.1.1 Multi-dimensionalarrays of variable length
 * triod315, 14.10.2019
 */
#include <iostream>
using namespace std;
int main() {
    int c;
    cin>>c;

    int ** array=new int*[c];
    int n;
    for (int i=0;i<c;i++)
    {
        cin>>n;
        array[i]=new int[n+1];
        array[i][0]=n;
        for (int j=1;j<=n;j++)
            cin>>array[i][j];
    }

    int sum;
    float sumall=0;

    cout.precision(3);
    for (int i=0;i<c;i++)
    {
        sum=0;
        for (int j=1;j<=array[i][0];j++)
        {
            sum+=array[i][j];
        }

        cout<<"Course "<<i+1<<": final "<<(float)sum/array[i][0]<<" grades: ";
        for (int j=1;j<=array[i][0];j++)
        {
            cout<<array[i][j]<<" ";
        }
        sumall+=(float)sum/array[i][0];

        cout<<endl;

    }

    cout<<"Overall final "<<sumall/c<<endl;
    return 0;
}