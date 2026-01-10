// Function to count number of words

#include <stdio.h>
#include <stdbool.h>

bool alphabetic( char test)
{
    if ((test >= 'a' && test <= 'z') || (test >= 'A' && test <= 'Z') )
	return true;
    return false;
}

bool checkNumber(char test)
{
    if (test >= '0' && test <= '9')
	return true;

    return false;
}

bool checkApostrophe(char str[2])
{
    bool check = false;
    if (str[0] == '\'' && (str[1] != '\0'  && str[1] != '\''))
	check = true;
    
    return check;
}

int CountWords(const char text[])
{
    int i = 0, count = 0;
    bool findword = true;
    bool on_num = false;
    while (text[i] != '\0')
	{
	    if (alphabetic(text[i]) || // for alphabet
		(text[i] == '\'' && i > 0  && (alphabetic(text[i - 1]) && alphabetic(text[i + 1]))) || // for apostrophe
		checkNumber(text[i]) ||
		(findword && text[i] == '-' && checkNumber(text[i + 1]))) // for number 
		{
		    if (findword)
			{
			    if(checkNumber(text[i]))
				on_num = true;
			    count++;
			    findword = false;
			}
		}
	    else if (on_num && (text[i] == '.' || text[i] == ',') && checkNumber(text[i + 1])) // for checking embeded preiods and commas
		findword = false;
	    else {
		findword = true;
		on_num = false;
	    }
	    i++;
	}

    return count;
}

int main(void)
{
    const char text1[] = "checking counting number 100,000 -123 does work's ?";
    const char text2[] = "Well, here goes... Again.";

    printf("%s - words = %i\n", text1, CountWords(text1));
    printf("%s - words = %i\n", text2, CountWords(text2));

    
    return 0;
}

