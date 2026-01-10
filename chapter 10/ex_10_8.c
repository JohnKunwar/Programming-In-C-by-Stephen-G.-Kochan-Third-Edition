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


int string_length(char string[])
{
    int i = 0;

    while (string[i] != '\0')
	i++;

    return i;
}

void right_shift(char source[], int pos)
{

    char temp1 = source[pos], temp2;
    while (source[pos] != '\0')
	{
	    temp2 = source[pos + 1];
	    source[pos + 1] = temp1;
	    temp1 = temp2;
	    pos++;
	}
    source[pos] = '\0';
}

void insert_string(char source[], char text[], int pos)
{

    // right shift the source from pos
    int text_len = string_length(text);
    int i_text = 0;
    while (text_len > 0)
	{
	    // right shift
	    right_shift(source, pos);
	    source[pos] = text[i_text];

	    pos++;
	    i_text++;
	    text_len--;
	}
	
	
}

int replace_string(char text[], char s1[], char s2[])
{
    if (find_String(text,s1) == -1)
	return 0;
    
    int position = find_String(text, s1);
    remove_string(text, position, string_length(s1));
    insert_string(text, s2, position);


    return 1;
}
int main()
{
    char text[] = "I am the * yeah, You are getting sun yeah., Yeah Yeah I am the * 1";
    int found;
    do {
	found = replace_string(text, " ", "");
    }
	while (found);
    printf("%s\n", text);
    return 0;
}

// modified by ex_10_9
