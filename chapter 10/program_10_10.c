// Program to use the dictionary lookup program
// Better searching binary search

#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[14];
    char definition[50];
};

int compareString (char word1[], const char word2[])
{
    int i = 0;

    while (word1[i] == word2[i] && word1[i] != '\0' && word2[i] != '\0') 
	i++;

    if (word1[i] > word2[i])
	return 1;
    if (word1[i] < word2[i])
	return -1;
    return 0;
}

int lookup(const struct entry dict[], char word[], int entries)
{
    int low = 0, high = entries - 1;
    int mid, comp;
    
    while (low <= high)
	{
	    mid = (low + high) / 2;

	    comp = compareString(word, dict[mid].word); // Implies that compares word relative to dictionary

	    if (comp == 1) // Given word is higher then the guess implies guess is lowes implies go higher 
		low = mid + 1;
	    else if (comp == -1) // Given word is lover then the guess implies guess is higher implies go lower
		high = mid - 1;
	    else if (comp == 0) 
		return mid;
		
	}

    return -1;
}

int main(void)
{ 
    const struct entry dictionary[] =
	{
	    { "aardvark", "a burrowing African mammal" },
	    { "abyss", "a bottomless pit" },
	    { "acumen", "mentally sharp; keen" },
	    { "addle", "to become confused" },
	    { "aerie", "a high nest" },
	    { "affix", "to append; attach" },
	    { "agar", "a jelly made from seaweed" },
	    { "ahoy", "a nautical call of greeting" },
	    { "aigrette", "an ornamental cluster of feathers" },
	    { "ajar", "partially opened" }
	};
    char word[13];
    int entries = 10, entry_number;
    printf("Enter a word: ");
    scanf("%s", word);

    
    entry_number = lookup(dictionary,word,entries);
    
    if (entry_number != -1)
	{
	    printf("%s", dictionary[entry_number].definition);
	}
    else
	printf("Sorry, the word %s is not on my dicitonary.\n", word);

      return 0;
}
