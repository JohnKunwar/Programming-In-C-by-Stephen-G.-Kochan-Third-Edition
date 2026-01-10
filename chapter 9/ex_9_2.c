// Program to calculate elapsed date between two dates.
// Formula: elapsed days = N2 - N1
// where N = 1461 * f(year, month) / 4 + 153  * g(month) / 5 + day

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int main(void)
{
    int calculateN(struct date);
    struct date date1, date2;
    int n1, n2, days;
    
    printf("Enter the first date (YYYY MM HH): ");
    scanf("%i %i %i", &date1.year, &date1.month, &date1.day);
    printf("Enter the last date (YYYY MM HH): ");
    scanf("%i %i %i", &date2.year, &date2.month, &date2.day);

    n1 = calculateN(date1);
    n2 = calculateN(date2);

    days = n2 - n1;

    printf("Number of days is %i", days);
    return 0;
}

int fyear(int year, int month)
{
    if (month <= 2)
	return year - 1;
    return year;
}

int gmonth(int month)
{
    if (month <= 2)
	return month + 13;
    return month + 1;
}
int calculateN(struct date test)
{
    return 1461 * fyear(test.year, test.month) / 4 + 153 * gmonth(test.month) / 5  + test.day;
}
