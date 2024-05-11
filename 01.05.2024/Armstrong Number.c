#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,rem,r=0;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        rem=a%10;
        r+=pow(rem,3);
        a/=10;
    }
    if(b==r)
    printf("%d is a Armstrong Number",b);
    else
    printf("%d is Not a Armstrong Number",b);
}


