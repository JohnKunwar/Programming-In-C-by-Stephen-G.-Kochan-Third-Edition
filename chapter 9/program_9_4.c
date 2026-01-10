// Program to determine tommorow date which include leap-year
// In leap year the feburary has 29 days instead of 28 days other are just normal
// Using function
#include <stdio.h>
#include <stdbool.h>

struct date {
    int day;
    int month;
    int year;
};

int numberOfDays(struct date d);
struct date nextUpdate(struct date today);
bool isLeapYear(int year);


int main(void)
{
    struct date today, tommorow;
    
    printf("Enter today's date (yyyy mm dd): ");
    scanf("%i%i%i", &today.year, &today.month, &today.day);

    tommorow = nextUpdate(today);
    
    printf("Tommorow day is %i/%.2i/%.2i", tommorow.year, tommorow.month, tommorow.day);
    return 0;
}

struct date nextUpdate(struct date today)
{
    struct date tommorow;
    
    if (today.day != numberOfDays(today)) { // end of a day
	tommorow =  (struct date) {today.day + 1, today.month, today.year};
    }
    else if (today.month == 12) { // end of year
	tommorow = (struct date) {1, 1, today.year + 1};
    }
    else { // end of a month
	tommorow = (struct date) { 1, today.month + 1, today.year};

    }

    return tommorow;
}

int numberOfDays(struct date d)
{
    int end_of_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    if (isLeapYear(d.year) && d.month == 2)
	return 29;
    else
	return end_of_month[d.month];
}

bool isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	return true;
    else
	return false;
}


