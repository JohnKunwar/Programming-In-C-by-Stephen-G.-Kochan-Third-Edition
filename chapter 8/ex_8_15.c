// program to convert a postive integer to another base

#include <stdio.h>

int      convertedNumber[64];
long int numberToConvert;
int      base;
int      digit = 0;

void getNumAndBase(void)
{
  printf("Enter your desire number: ");
  scanf("%li", &numberToConvert);

  do {
      printf("Enter the base that you want to converted into: ");
      scanf("%i", &base);

      if (base < 2 || base > 16)
	  printf("Bad base - must be between 2 and 16. Please Re-enter\n");
    
  } while (base < 2 || base > 16);
}

void convertNumber(void)
{
  do {
    convertedNumber[digit] = numberToConvert % base;
    digit++;
    numberToConvert /= base;
  } while (numberToConvert != 0);
}

void displayConvertedNumber(void)
{
  const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

  printf("Converted Number = ");
  for (digit--; digit >= 0; digit--) {
    printf("%c", baseDigits[convertedNumber[digit]]);
  }
  
}


int main(void)
{
  getNumAndBase();
  convertNumber();
  displayConvertedNumber();

  return 0;
}
