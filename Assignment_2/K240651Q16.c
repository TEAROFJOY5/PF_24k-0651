#include <stdio.h>
void matrixAdd(int mat1[][10], int mat2[][10], int result[][10], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void matrixSubtract(int mat1[][10], int mat2[][10], int result[][10], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void matrixMultiply(int mat1[][10], int mat2[][10], int result[][10], int m, int n, int p)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void displayMatrix(int mat[][10], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    int mat1[10][10], mat2[10][10], result[10][10];
    int m1, n1, m2, n2;
    printf("Choose an operation:\n");
    printf("1. Matrix Addition\n2. Matrix Subtraction\n3. Matrix Multiplication\n");
    scanf("%d", &choice);
    if(choice == 1 || choice == 2)
    {
        printf("Enter rows and columns of the matrices: ");
        scanf("%d %d", &m1, &n1);
        m2 = m1;
        n2 = n1;
        printf("Enter elements of Matrix 1:\n");
        for(int i = 0; i < m1; i++)
        {
            for(int j = 0; j < n1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter elements of Matrix 2:\n");
        for(int i = 0; i < m2; i++)
        {
            for(int j = 0; j < n2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        if(choice == 1)
        {
            matrixAdd(mat1, mat2, result, m1, n1);
            printf("Result of Addition:\n");
        }
        else
        {
            matrixSubtract(mat1, mat2, result, m1, n1);
            printf("Result of Subtraction:\n");
        }
        displayMatrix(result, m1, n1);
    }
    else if(choice == 3)
    {
        printf("Enter rows and columns of Matrix 1: ");
        scanf("%d %d", &m1, &n1);
        printf("Enter rows and columns of Matrix 2: ");
        scanf("%d %d", &m2, &n2);
        if(n1 != m2)
        {
            printf("Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n");
            return 0;
        }
        printf("Enter elements of Matrix 1:\n");
        for(int i = 0; i < m1; i++)
        {
            for(int j = 0; j < n1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter elements of Matrix 2:\n");
        for(int i = 0; i < m2; i++)
        {
            for(int j = 0; j < n2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        matrixMultiply(mat1, mat2, result, m1, n1, n2);
        printf("Result of Multiplication:\n");
        displayMatrix(result, m1, n2);
    }
    else
    {
        printf("Invalid choice.\n");
    }
    return 0;
}
