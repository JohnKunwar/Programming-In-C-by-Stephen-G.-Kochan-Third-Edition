// program to insert a string

#include <stdio.h>


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


int main(void)
{
    char str[100] = "John";

    insert_string(str, "what", 1);
    printf("%s\n", str);
    
    return 0;
}
    

