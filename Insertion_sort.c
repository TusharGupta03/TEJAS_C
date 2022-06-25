#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;
    printf("Enter Number of Terms in Array : \n");
    scanf("%d", &n);
    printf("Enter Elements in Array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array Before Sorting: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    for (i = 1; i < n-1; i++)
    {
        for (j = i + 1; j > 0;j--)
        {
            if (a[j] > temp)
            {
                a[j + 1] = a[j];
                j--;
            }
            else
            {
                break;
            }
        }
        a[i + 1] = temp;
    }
    printf("After Sorting: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}