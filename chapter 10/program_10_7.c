// Function to count number of words

#include <stdio.h>
#include <stdbool.h>

bool alphabetic( char test)
{
    if ((test >= 'a' && test <= 'z') || (test >= 'A' && test <= 'Z') )
	return true;
    return false;
}

int CountWords(const char text[])
{
    int i = 0, count = 0;
    bool findword = true;
    while (text[i] != '\0')
	{
	    if (alphabetic(text[i])) // runs perfectly
		{

		    if (findword)
			{
			    count++;
			    findword = false;
			}


		}
	    else
		findword = true;
	    i++;
	}

    return count;
}

int main(void)
{
    const char text1[] = "Well, here goes.";
    const char text2[] = "Well, here goes... Again.";

    printf("%s - words = %i\n", text1, CountWords(text1));
    printf("%s - words = %i\n", text2, CountWords(text2));

    
    return 0;
}
