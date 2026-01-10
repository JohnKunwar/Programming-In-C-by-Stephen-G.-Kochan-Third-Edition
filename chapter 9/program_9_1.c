// Introduction to Structure

#include <stdio.h>

int main(void)
{
    struct date {
	int day;
	int month;
	int year;
    };

    struct date today;

    today.month = 12;
    today.year = 2025;
    today.day = 3;

    printf("Today's date is %i/%i/%.2i", today.year, today.month, today.day);
	
    return 0;
}
