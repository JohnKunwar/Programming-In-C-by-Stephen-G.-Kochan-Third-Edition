// program to transpose a 4 x 5 matrix into 5 x 4 matrix

#include <stdio.h>

void transpose (int m1[4][5], int m2[5][4])
{
    for (int i = 0; i < 5; i++) {
	for ( int j = 0; j < 4; j++) {
	    m2[i][j] = m1[j][i];
	}
	
    }   
}

int main(void)
{
    int matrix[4][5] = {
	{1 , 2 , 3, 4, 5},
	{6 , 7, 8, 9, 10},
	{11, 12, 13, 14, 15},
	{16, 17, 18, 19, 20}
    };
    int tmatrix[5][4];
    int i,j;

    printf("Initial Matrix\n");
    for (int i = 0; i < 4; i++) {
	for ( int j = 0; j < 5; j++)
	    printf("%2i ", matrix[i][j]);
	printf("\n");
    }

    transpose(matrix,tmatrix);
    
    printf("Transpose Matrix\n");
    for (int i = 0; i < 5; i++) {
	for ( int j = 0; j < 4; j++)
	    printf("%2i ", tmatrix[i][j]);
	printf("\n");
    }

    transpose(matrix,tmatrix);
    return 0;
}
