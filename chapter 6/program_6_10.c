// program to generate prime numbers 

#include <stdio.h>

int main(void)
{
  int num, check;
  _Bool isPrime;
 
  for (num = 2; num <= 50; num++) {
    if (num % 2 != 0 && num > 2) {
    isPrime = 1;
    
    for (check = 2; check < num; check++)
      if (num % check == 0) {
        isPrime = 0;
        break;
      }
    
    if (isPrime)
      printf("%i\t", num);
    }
  }
  
  return 0;
}
