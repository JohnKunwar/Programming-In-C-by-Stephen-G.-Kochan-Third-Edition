// Program to update date struture using pointer
// No leap year check

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int check_last_day (struct date * const dat)
{
    int last_day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (last_day[dat->month] == dat->day)
	return 1;

    return 0;
}

void date_update( struct date  * const today)
{

    if (check_last_day(today) && today->month == 12)
	{
	    today->year++;
	    today->month = 1;
	    today->day = 1;
	}
    else if (check_last_day(today))
	{
	    today->month++;
	    today->day = 1;
	}
    else
	today->day++;	
}

int main(void)
{
    struct date today = {2025, 11, 30};

    date_update(&today);
    printf("After date update:\n");
    printf("%i:%i:%.2i", today.year, today.month, today.day);
    
    return 0;
}
