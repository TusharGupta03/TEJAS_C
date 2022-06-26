#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], i, j, n;
    printf("Enter Number of Rows and Columns in Matrix");
    scanf("%d", &n);
    printf("\n Enter Elements in Matrix A : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered Matrix : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
    }
    printf("Transpose of Above Matrix : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", b[i][j]);
        }
    }
    return 0;
}
