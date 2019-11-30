#include <stdio.h>

int main()
{

    float numb;
    printf("Enter the number: ");
    scanf("%f", &numb);
    if (numb >= 1. && numb < 2.)
        printf("Very bad");
    else if (numb >= 2. && numb < 3.)
        printf("Bad");
    else if (numb >= 3. && numb < 4.)
        printf("Neutral");
    else if (numb >= 4. && numb < 5.)
        printf("Good");
    else if (numb >= 5. && numb < 6.)
        printf("Very good");

   return 0;
}
