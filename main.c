#include<stdio.h>

int main()
{
  printf("Select the operation\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n");
  printf("5. Determinant\n6. Cofactor\n7. Inverse\n8. Rank\n");
  int choice;
  scanf("%d", &choice);
  switch(choice)
  {
    case 1:
  }
  int m, n;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &m, &n);
  int a[m][n];
  return 0;
}
