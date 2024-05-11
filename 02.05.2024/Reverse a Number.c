#include <stdio.h>
int main() {
    int a,reverse=0,rem;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        reverse=reverse*10+rem;
        a/=10;
    }
    printf("%d",reverse);
}

