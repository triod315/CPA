#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    setbuf(stdout, 0);
    int dayOfTheWeek = 0;
    printf("Enter the day of the week (0 - 6): ");
    scanf("%d", &dayOfTheWeek);
    if (dayOfTheWeek == 0)
        printf("The day of week is: Sunday");
    else if (dayOfTheWeek == 1)
        printf("The day of week is: Monday");
    else if (dayOfTheWeek == 2)
        printf("The day of week is: Tuesday");
    else if (dayOfTheWeek == 3)
        printf("The day of week is: Wednesday");
    else if (dayOfTheWeek == 4)
        printf("The day of week is: Thursday");
    else if (dayOfTheWeek == 5)
        printf("The day of week is: Friday");
    else if (dayOfTheWeek == 6)
        printf("The day of week is: Saturday");
    else
        printf("There is no such day: %d. Input value must be from 0 to 6.", dayOfTheWeek);

    return 0;
}
