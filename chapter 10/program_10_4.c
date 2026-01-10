// Function to determine if two strings are equal

#include <stdio.h>
#include <stdbool.h>


int chrlength(const char str1[])
{
    int count = 0;
    
    while (str1[count] != '\0') {
	count++;
    }
    
    return count;
}

bool equalString (const char s1[], const char s2[])
{
    int i = 0;
    bool isEqual;

    // This while loop runs until s1 is equal to s2 and
    // if s1 is not terminating and if s2 also not terminating
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	    i++;
    if (s1[i] == '\0' && s2[i] == '\0')
	isEqual = true;
    else
	isEqual = false;

    return isEqual;
}

/*  My solution 
bool equalString (const char str1[], const char str2[]) {

	bool is_equal = true;
    // First let's check if they are of equal length
	if (chrlength(str1) == chrlength(str2)) {
	    int i = 0;
	    while(str1[i] != '\0') {
		if (str1[i] != str2[i]) {
		    is_equal = false;
		    break;
		}
		i++;
	    }
	}
	else {
	    is_equal = false;
	}

	return is_equal;
}
*/
int main(void)
{
    const char stra[] = "string compare test";
    const char strb[] = "string";
    printf ("%i\n", equalString (stra, strb));
    printf ("%i\n", equalString (stra, stra));
    printf ("%i\n", equalString (strb, "string"));
    return 0;
}
