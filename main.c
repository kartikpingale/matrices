#include<stdio.h>

int main()
{
  printf("Select the operation\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n5. Determinant\n6. Cofactor\n7. Rank\n8. Trace");
  int m, n;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &m, &n);
  int a[m][n];
  return 0;
}
