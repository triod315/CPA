#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    setbuf(stdout, 0);
    int days = 0, month = 0;
    printf("Enter the day: ");
    scanf("%d", &days);
    printf("Enter the month: ");
    scanf("%d", &month);
    int daysInYear = 0;
    for (int m = 1; m < month; m++)
    {
        if (m == 2)
        {
            daysInYear += 29;
        }
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            daysInYear += 31;
        }
        else
        {
            daysInYear += 30;
        }
    }
    daysInYear += days;
    printf("The day of the year: %d", daysInYear);

    return 0;
}
