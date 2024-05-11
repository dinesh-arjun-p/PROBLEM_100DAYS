#include <stdio.h>
int main() {
    int a,b,reverse=0,rem;
    scanf("%d",&a);b=a;
    while(a!=0)
    {
        rem=a%10;
        reverse=reverse*10+rem;
        a/=10;
    }
    if(b==reverse)
    printf("%d is a Palindrome Number",b);
    else
    printf("%d is not a Palindrome Number",b);
}

