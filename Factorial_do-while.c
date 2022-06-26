#include<stdio.h>
int main()
{
    int n,i,fact;
    fact=1;
    printf("Enter Number to find the Factorial of : ");
    scanf("%d",&n);
    i=n;
    do
    {
        fact=fact*i;
        i--;
    }
    while(i>0);
    printf("Factorial of %d is %d",n,fact);
    return 0;
}