#include<stdio.h>
int main()
{
    int a,b,i,hcf;
    printf("Enter First Number:  ");
    scanf("%d",&a);
    printf("Enter Second Number:  ");
    scanf("%d",&b);
    for(i=2;(i<=a)||(i<=b);i++)
    {
        (a%i==0)&&(b%i==0)?hcf=i:hcf=0;
    }
    printf("HCF of %d and %d is %d",a,b,hcf);
    return 0;
}