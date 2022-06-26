#include<stdio.h>
int check(int a)
{
    int i,count;
    count=0;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count+=1;
        }
    }
    count>0?printf("%d is a Composite Number",a):printf("%d is a Prime Number",a);
}
int main()
{
    int a;
    printf("Enter Number to Check for Prime or Composite:  ");
    scanf("%d",&a);
    check(a);
    return 0;
}