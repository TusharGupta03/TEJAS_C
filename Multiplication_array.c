#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100], i, j, k, r1, r2, c1, c2;
    printf("For Matrix A\n");
    printf("Enter Number of Rows in Matrix A\n");
    scanf("%d", &r1);
    printf("\nEnter Number of Columns in Matrix A\n");
    scanf("%d", &c1);
    printf("Enter Elements in Matrix A\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nFor Matrix B\n");
    printf("Enter Number of Rows in Matrix B\n");
    scanf("%d", &r2);
    printf("Enter Number of Columns in Matrix B\n");
    scanf("%d", &c2);
    printf("Enter Elements in Matrix B\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (r2 == c1)
    {
        printf("\nPERFORMING MULTIPLICATON\n");
        for (i = 0; j < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < r2; k++)
                {
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }

        printf("After Multiplication, Matrix: \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }
        }
    }
    else
    {
        printf("\nMultiplication can't be Performed, Matrix Doesn't Satisfy the Required Condition");
    }

    return 0;
}