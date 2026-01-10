// program to display numbers in alphanumeric name

#include <stdio.h>

int main(void) {
  int num, reverse = 0, digit;

  printf("Enter a number: ");
  scanf("%i", &num);

  // reverse the given number
  while (num != 0) {
      reverse = (reverse * 10) + (num % 10);
    num /= 10;
  }

  do {
    digit = reverse % 10;
    
    switch (digit) {
      case 0:
        printf("Zero ");
        break;
        
      case 1:
        printf("One ");
        break;

      case 2:
        printf("Two ");
        break;

      case 3:
        printf("Three ");
        break;

      case 4:
        printf("Four ");
        break;

      case 5:
        printf("Five ");
        break;

      case 6:
        printf("Six ");
        break;

      case 7:
        printf("Seven ");
        break;

      case 8:
        printf("Eight ");
        break;

      case 9:
        printf("Nine ");
        break;

      default:
        printf("Error\n");
        break;
    }
    reverse /= 10;
  } while (reverse != 0);

  return 0;
}
