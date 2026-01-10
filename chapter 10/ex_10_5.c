// Program to find string

#include <stdio.h>
#include <stdbool.h>


int find_String(char source[], char word[])
{
    int i = 0, j = 0, init; 
    int starting_point;
    bool search_index = true, found = false;
    
    // hat
    while (source[i] != '\0')
	{
	    // Compares the char if they are equal
	    if (source[i] == word[j])
		{
		    if (search_index)  // inialize the starting point of the first match of character
			{
			    starting_point = i;
			    search_index = false;
			}
		    j++;
		    if (word[j] == '\0') // determines whether we have found the word or not on source
			{
			    found = true;
			    break;
			}

		}
	    else
		{
		    search_index = true; // Reset the search_index
		    j = 0; // reset the j		    
		}
	    i++;
	}

    if (found)
	return starting_point;
    else
	return  -1;
    
}

int main()
{
    printf("%i\n", find_String("lol, my name is john and also john", "john"));

    return 0;
}
