// program to multiply by 2

#include <stdio.h>

void multiplyby2 (float values[], int n)
{
  for (int i = 0; i < n; i++)
    values[i] *= 2;
  
}

int main(void)
{
  float nums[] = {1.2f, -3.7f, 6.2f, 8.55f};

  multiplyby2(nums, 4);

  for (int i = 0; i < 4; i++)
    printf("%.2f ", nums[i]);

  return 0;
}
