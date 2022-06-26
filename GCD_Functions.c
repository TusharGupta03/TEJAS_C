#include<stdio.h>
int hcf(int a,int b)
{
    int min,i;
    min=a>b?a:b;
    for(i=min;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            break;
        }
    }    
    return i;
}
int main()
{
    int a,b,gcd;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    gcd=hcf(a,b);
    printf("\nGCD of %d and %d is %d",a,b,gcd);
    
}
