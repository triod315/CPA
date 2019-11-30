#include <stdio.h>
#include <stdbool.h>

int main()
{
  
    int year = 0, month = 0, day = 0;
    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);
    bool isLeap = false;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        isLeap = true;
    int daysInYear = 0;
    for (int m = 1; m < month; m++)
    {
        if (m == 2)
        {
            if (isLeap)
                daysInYear += 29;
            else
                daysInYear += 28;
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
    daysInYear += day;
    printf("The day of the year: %d", daysInYear);

    return 0;
}
