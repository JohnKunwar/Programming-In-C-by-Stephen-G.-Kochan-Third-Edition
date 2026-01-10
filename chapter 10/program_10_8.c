// Program to count number of words in a paragraph

#include <stdio.h>
#include <stdbool.h>

// function to read a line
void readline(char text[])
{
    int i = 0;
    do {
	text[i] = getchar();
	i++;
    } while(text[i-1] != '\n');

    text[i - 1] = '\0';
}
// function to check whether a character is alphabetic or not
bool alphabetic (char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return true;
    return false;
}
// function to count a word in a line
int wordCount(char text[])
{
    int i = 0;
    int count = 0;
    bool do_counting = true;
    while (text[i] != '\0')
	{
	    if (alphabetic(text[i]))
		{
		    if (do_counting) {
			count++;
			do_counting = false;
		    }
		}
	    else
		do_counting = true;

	    i++;
	}

    return count;
}

int main(void)
{
    // Declaration
    bool end_of_text = false;
    char text[81];
    int count_word = 0;
    // Ask user for prompt
    printf("Type in your text\n");
    printf("When you are done, Press 'Return' twice\n\n");
    while (!end_of_text)
	{
	    readline(text); // runs 
	    count_word += wordCount(text); // it doesn't work
	    if (text[0] == '\0')
		end_of_text = true;
	}
    printf("\n%i", count_word );
    return 0;
}
