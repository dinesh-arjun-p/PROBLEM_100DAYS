#include <stdio.h>
int main() {
    int a,sum=0,rem;
    scanf("%d",&a);
    int sq=a*a;
    int b=a;
    while(sq!=0)
    {
        rem=sq%10;
        sum+=rem;
        sq/=10;
    }
    if(sum==b)
    printf("%d is a Neon Number",b);
    else
    printf("%d is not a Neon Number",b);
}
