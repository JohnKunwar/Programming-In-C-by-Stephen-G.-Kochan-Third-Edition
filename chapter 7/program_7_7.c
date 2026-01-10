// To convert digit

#include <stdio.h>

int main(void)
{
  long int num_to_convert;
  int base;
  int converted_number[100];
  int index = 0;
  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
  };
  
  // Asking number and base
  printf("Enter the number to be converted: ");
  scanf("%ld", &num_to_convert);
  printf("Enter the base:");
  scanf("%i", &base);

  // converting the number into desire base
  do {
    converted_number[index] = num_to_convert % base;
    index++;
    num_to_convert /= base;
    
  } while (num_to_convert != 0);

  // displaying the result
  printf("\n Your digt after changing the base\n");
  for (--index; index >= 0; index--) {
    printf("%c",baseDigits[converted_number[index]]);
  }

  printf("\n");

  return 0;
  
  
}
