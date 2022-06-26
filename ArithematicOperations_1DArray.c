#include <stdio.h>
int main()
{
    int a[100], i, n, sum_even, sum_odd, avg;
    printf("Enter Number of Elements in array A : ");
    scanf("%d", &n);
    printf("\nEnter Elements in ARRAY A: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    sum_odd = 0;
    sum_even = 0;
    avg = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum_even += a[i];
        }
        else
        {
            sum_odd += a[i];
        }
    }
    avg = (sum_even + sum_odd) / n;
    printf("Sum of odd Number in the Array: %d \n", sum_odd);
    printf("Sum of Even Number in the Array: %d \n", sum_even);
    printf("Average of Numbers in the Array: %d \n", avg);
    return 0;
}