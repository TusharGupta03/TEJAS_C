#include <stdio.h>
int main()
{
    int n, sum, temp;
    sum = 0;
    printf("Enter Number upto which sum is required : ");
    scanf("%d", &n);
    temp = n;
    while (n >= 0)
    {
        sum = sum + n;
        n -= 1;
    }
    printf("Sum of %d Natural Number is %d", temp, sum);
    return 0;
}