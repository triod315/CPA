#include <stdio.h>
#include <stdbool.h>

int main()
{
  
    float a = 0;
    float b = 0;
    setbuf(stdout, 0);
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Value A: %.3f\n", a);
    printf("Value B: %.3f\n", b);
    printf("%f + %f = %f\n", a, b, a + b);
    printf("%f - %f = %f\n", a, b, a - b);
    printf("%f * %f = %f\n", a, b, a * b);

   
    return 0;
}
