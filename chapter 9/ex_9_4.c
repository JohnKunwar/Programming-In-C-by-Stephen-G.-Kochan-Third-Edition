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
    struct date date1;
    void calculateday(int daysfromN);
    int n1;
    
    printf("Enter the first date (YYYY MM HH): ");
    scanf("%i %i %i", &date1.year, &date1.month, &date1.day);


    n1 = calculateN(date1);
    printf("n1 : %i", n1);
    calculateday(n1);
    return 0;
}

void  calculateday(int daysfromN)
{
    int day = (daysfromN - 621049) % 7;

    if (day == 0)
	printf("Sunday\n");
    else if (day == 1)
	printf("Monday\n");
    else if (day == 2)
	printf("Tuesday\n");
    else if (day == 3)
	printf("Wednesday\n");
    else if (day == 4)
	printf("Thursday\n");
    else if (day == 5)
	printf("Friday\n");
    else
	printf("Saturday\n");
    
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
