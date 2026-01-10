// Program to use the dictionary lookup program

#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[14];
    char definition[50];
};

bool isEqualString (char word1[], const char word2[])
{
    int i = 0;

    while (word1[i] == word2[i] && word1[i] != '\0' && word2[i] != '\0')
	i++;

    if(word1[i] == '\0' && word2[i] == '\0')
	return true;
    
    return false;
}

int lookup(const struct entry dict[], char word[], int entries)
{
    int i;

    for(i = 0; i < entries; i++)
	{
	    if(isEqualString(word,dict[i].word))
		{
		    return i;
		}
	}

    return -1;
}
bool compare_word(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
	i++;

    if (str1[i] > str2[i])
	return 1;
    else
	return 0;
    
}

void sort_dict(struct entry dict[], int no_of_words)
{
    struct entry tmp;
    for (int i = 0; i < no_of_words; i++)
	{
	    for (int j = i + 1; j < no_of_words; j++)
		{
		    if (compare_word(dict[i].word, dict[j].word))
			{
			    tmp = dict[i];
			    dict[i] = dict[j];
			    dict[j] = tmp;
			}
		}
	}
}

int main(void)
{
    struct entry dictionary[] =  
	{

	    { "abyss", "a bottomless pit" },
	    { "acumen", "mentally sharp; keen" },
	    { "addle", "to become confused" },
	    { "aerie", "a high nest" },
		{"acum", "5 a bro"},
	    { "affix", "to append; attach" },
	    { "agar", "a jelly made from seaweed" },
	    { "ahoy", "a nautical call of greeting" },
	    { "aigrette", "an ornamental cluster of feathers" },
	    { "ajar", "partially opened" },
	    { "aardvark", "a burrowing African mammal" }
	};


    int entries = 11;
    sort_dict(dictionary,entries);    

    for (int i = 0; i < entries; i++)
	printf("%s\n", dictionary[i].word);
    
    return 0;
}
