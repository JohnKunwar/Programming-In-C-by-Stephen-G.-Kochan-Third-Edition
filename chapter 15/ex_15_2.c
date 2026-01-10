// program to prints the month in words

#include <stdio.h>

enum month {
    january = 1, february, march, april, may, june, july, august, september, october, november, december 
};



char * month_name(enum month amonth)
{
    char *s;
    switch (amonth)
	{
	case january:
	    s = "january\0";
	    break;
	case february:
	    s = "february\0";
	    break;
	case march:
	    s = "march\0";
	    break;
	case april:
	    s = "april\0";
	    break;
	case may:
	    s = "may\0";
 	    break;
	case june:
	    s = "june\0";
	    break;
	case july:
	    s = "july\0";
	    break;
	case august:
	    s = "august\0";
	    break;
	case september:
	    s = "september";
	    break;
	case november:
	    s = "novemember\0";
	    break;
	case december:
	    s = "december\0";
	    break;

	default:
	    s = "invalid\0";
	    break;
	}
    return s;
}

int main(void)
{
    enum month amonth;
    printf("Enter your month:");
    scanf("%i", &amonth);

    printf("%s\n", month_name(amonth));
    return 0;
}
