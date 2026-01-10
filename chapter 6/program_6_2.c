// Program to calculate the average set of grade and count the number of failure

#include <stdio.h>

int main(void)
{
  int num_of_grades,
    grade,
    grade_total = 0,
    failure_count = 0;
  float grade_average;

  printf("How many grades do you want to enter: ");
  scanf("%i", &num_of_grades);

  for (int i = 1; i <= num_of_grades; i++) {
    printf("Enter a grade #%i: ", i);
    scanf("%i", &grade);

    grade_total += grade;

    if (grade < 65)
      failure_count++;
    
  }

  grade_average = (float) grade_total / num_of_grades;

  printf("\nGrade Average: %.2f\n", grade_average);
  printf("Number of Failures: %i", failure_count);
  
  
}
