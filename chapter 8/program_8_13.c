// program to do a scalar multiplication on a multidimensional array

#include <stdio.h>

void display_matrix(int matrix[3][5]);
void scalar_multiply(int matrix[3][5], int scalar);

int main(void)
{
  int simple_matrix[3][5] =
    {
      { 7, 16, 55, 13, 12 },
      { 12, 10, 52, 0, 7 },
      { -2, 1, 2, 4, 9 }
    };

  printf("Original matrix:\n");
  display_matrix(simple_matrix);

  scalar_multiply(simple_matrix,2);

  printf("\nMultiply by 2:\n");
  display_matrix(simple_matrix);

  scalar_multiply(simple_matrix,-1);
  printf("\nThen multiplied by -1:\n");
  display_matrix(simple_matrix);
  
  return 0;
  
}

void display_matrix(int matrix[3][5])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5;j++)
      printf("%3i ",matrix[i][j]);

    printf("\n");
  }
}

void scalar_multiply(int matrix[3][5], int constant)
{
    for (int i = 0; i < 3; i++) 
      for (int j = 0; j < 5;j++)
        matrix[i][j] *= constant;
    
}
