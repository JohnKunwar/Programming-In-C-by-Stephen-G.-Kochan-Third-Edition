// Program to remove string

#include <stdio.h>
#include <stdbool.h>



void remove_string (char str[], int start, int range)
{
    int i = start;
    int j = start + range;

    if (start < 0 || range
	< 0)
	return;
    
    while(str[j] != '\0')
	str[i++] = str[j++];

    str[i] = '\0';
}
/* My solution
void remove_string( char str[], int start, int range)
{
    // Length of string
    int len = 0;
    while (str[len] != '\0')
	len++;

    char formated_string[len + 1];
    // storing the desired string by removing undesired string

    // Initalizing index;
    int i, j = 0;
    
    if (start == 0)
	i = range;
    else
	i = 0;

    while (i  < len)
	{
	    if (i >= start && i < (start + range) )
		{
		    i++;
		}
	    else
		{
		    formated_string[j] = str[i];
		    i++;
		    j++;
		}
	}

    formated_string[j] = '\0';

    // Re-entering the desired string into str character-string array
    i = 0;
    while (formated_string[i] != '\0') {
	str[i] = formated_string[i];
	i++;
    }
    str[i] = '\0';
}

*/

int main(void)
{
    char str[] = "the wrong son what the fuck now it works";
    remove_string(str, 4, 6);

    printf("\n%s\n", str);
    
    return 0;
}
