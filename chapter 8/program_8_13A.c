// program to do a scalar multiplication on a multidimensional array

#include <stdio.h>

void display_matrix(int nrows, int ncolm, int matrix[nrows][ncolm]);
void scalar_multiply(int nrows, int ncolm, int matrix[nrows][ncolm], int scalar);

int main(void)
{
  int simple_matrix[3][5] =
    {
      { 7, 16, 55, 13, 12 },
      { 12, 10, 52, 0, 7 },
      { -2, 1, 2, 4, 9 }
    };

  printf("Original matrix:\n");
  display_matrix(3, 5, simple_matrix);

  scalar_multiply(3, 5, simple_matrix,2);

  printf("\nMultiply by 2:\n");
  display_matrix(3, 5, simple_matrix);

  scalar_multiply(3, 5, simple_matrix,-1);
  printf("\nThen multiplied by -1:\n");
  display_matrix(3, 5, simple_matrix);
  
  return 0;
  
}

void display_matrix(int nrows, int ncolm, int matrix[nrows][ncolm])
{
  for (int i = 0; i < nrows; i++) {
    for (int j = 0; j < ncolm;j++)
      printf("%3i ",matrix[i][j]);

    printf("\n");
  }
}

void scalar_multiply(int nrows, int ncolm, int matrix[nrows][ncolm], int constant)
{
    for (int i = 0; i < nrows; i++) 
      for (int j = 0; j < ncolm;j++)
        matrix[i][j] *= constant;
    
}
