#include<stdio.h>
int fact(int a)
{
    if(a>=1)
    {
        return a*fact(a-1);
    }
    else{
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter Number to find Factorial of:   ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}