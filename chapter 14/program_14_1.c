// program to print number of days in a month using enum

#include <stdio.h>

int main(void)
{
    enum month {
	january = 1, february, march, april, may, june, july, august, september, october, november, december 
    };

    enum  month amonth;
    int days;
    
    printf("Enter a month: ");
    scanf("%i", &amonth);

    switch (amonth)
	{
	case january:
	case march:
	case may:
	case july:
	case august:
	case october:
	case december:
	    days = 31;
	    break;

	case april:
	case june:
	case september:
	case november:
	    days = 30;
	    break;

	case february:
	    days = 28;
	    break;

	default:
	    printf("Bad month\n");
	    days = 0;
	    break;
	}

    if(days != 0 )
	printf("Number of days in %i is %i", amonth, days);
    
    return 0;
}
    
