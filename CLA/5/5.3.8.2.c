#include <stdio.h>

int main()
{

    char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int numbOfDay;
    printf("Enter the number of the day (0-6): ");
    scanf("%d", &numbOfDay);
    if (numbOfDay < 0 || numbOfDay > 6)
        printf("Error, no such day.");
    else
    {
        printf("Array index version: ");
        for (int i = 0; i < 7; i++)
        {
            if (numbOfDay == i)
                printf("%s\n", days[i]);
        }
        printf("Pointer version: ");
        for (int i = 0; i < 7; i++)
        {
            if (numbOfDay == i)
                printf("%s\n", *(days + i));
        }
    }

    return 0;
}
