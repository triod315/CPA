/*
 * CPA Lab 2.1.3 Some actual evaluations - converting measurement systems
 * triod315, 8.10.2019
 */
#include <iostream>
#include <math.h>

using namespace std;
int main(void) {
    int sys;
    float m, ft, in;
// Insert your code here
    cin>>sys;
    if (sys==0)
    {
        cin>>m;
        ft=m*3.28084;
        in=(ft-floor(ft))*12;
        printf("%f m = %f'%f''",m,floor(ft),in);
    } else
        if (sys==1)
        {
            cin>>ft>>in;
            m=ft/3.28084+in/39.37;
            printf("%.0f'%f'' = %f m",ft,in,m);
        }
    return 0;
}