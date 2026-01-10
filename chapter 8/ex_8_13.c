// prorgram to sort the array

#include <stdio.h>

void sort(int values[], int no_elements, _Bool ascending)
{
  int tmp;
  if (ascending) {
      for (int i = 0; i < no_elements - 1; i++) {
	  for (int j = i + 1; j < no_elements; j++) {
	      if (values[i] > values[j]) {
		  tmp = values[i];
		  values[i] = values[j];
		  values[j] = tmp;
	      }
	  }
      }
  }
  else {
      for (int i = 0; i < no_elements - 1; i++) {
	  for (int j = i + 1; j < no_elements; j++) {
	      if (values[i] < values[j]) {
		  tmp = values[i];
		  values[i] = values[j];
		  values[j] = tmp;
	      }
	  }
      }      
  }
  
}

int main(void)
{
  int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                    44, -3, -9, 12, 17, 22, 6, 11 };

  printf("The array before sort\n");

  for(int i = 0; i < 16; i++)
    printf("%i ", array[i]);

  sort(array, 16, 0);

  printf("\n\n The array after sort\n");

  for (int i = 0; i < 16; i++)
    printf("%i ", array[i]);

  printf("\n");

  return 0;
}
