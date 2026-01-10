// Program to determine tommorow date

#include <stdio.h>

int main(void)
{
    struct date {
	int year;
	int month;
	int day;
    };

    int days_per_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    struct date today;
    struct date tommorow;

    printf("Enter today day, month and year: ");
    scanf("%i %i %i", &today.day, &today.month, &today.year);

    if (today.day == days_per_month[today.month] && today.month == 12) {
	tommorow.year  = today.year + 1;
	tommorow.month = 1;
	tommorow.day   = 1;
    }
    else if (today.day == days_per_month[today.month]) {
	tommorow.year  = today.year;
	tommorow.month = today.month + 1;
	tommorow.day   = 1;
    }
    else {
	tommorow.year  = today.year;
	tommorow.month = today.month;
	tommorow.day   = today.day + 1;
    }

    printf("Tommorow date is %i/%.2i/%.2i", tommorow.year, tommorow.month, tommorow.day);
    
    return 0;
}
