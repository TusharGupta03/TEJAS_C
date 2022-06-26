#include<stdio.h>
int lcm(int a,int b)
{
    int max,i;
    max=a>b?a:b;
    for(i=max;i>0;i=i+max)
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
    int x,y,lcmul;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter Second Number : ");
    scanf("%d",&y);
    lcmul=lcm(x,y);
    printf("LCM of %d and %d is %d",x,y,lcmul);
    return 0;
}