#include<stdio.h>

void matrixInput(int x[][]);
void matrixOutput();
void matrixAdd();
void matrixSubtract();
void matrixMultiply();
void matrixTranspose();

int main()
{
  printf("\t\tMATRIX CALCULATOR");
  printf("Select the operation\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n");
  printf("5. Determinant\n6. Cofactor\n7. Check for Identity matrix\n8. Inverse\n9. Rank\n");
  int choice;
  scanf("%d", &choice);
  switch(choice)
  {
    case 1:
      //addition
      break;
    case 2:
      //subtraction
      break;
    case 3:
      //multiplication
      break;
    case 4:
      //transpose
      break;
    case 5:
      //determinant
      break;
    case 6:
      //cofactor
      break;
    case 7:
      //identity check
      break;
    case 8:
      //inverse
      break;
    case 9:
      //rank
      break;
    default:
      printf("Invalid Input! Enter a number between 1 to 9!\n");
      break;
  }
  return 0;
}

void matrixInput(int x[][])
{
  int m, n;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &m, &n);
  int x[m][n];
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
      printf("Enter element [%d][%d]", i, j);
      scanf("%d", &x[i][j]);
    }
    printf("\n");
  }
}

void matrixOutput()
{
  
}

void matrixAdd()
{
  
}

void matrixSubtract()
{
  
}

void matrixMultiply()
{
  
}

void matrixTranspose()
{
  
}
