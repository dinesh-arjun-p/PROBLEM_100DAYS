#include <stdio.h>
int main() {
    int a,sum=0,t,rem;
    scanf("%d",&a);
    t=a;
    while(a!=0){
        rem=a%10;
        sum+=rem;
        a=a/10;
    }
    if(t%sum==0)
        printf("%d is a Harshad Number",t);
    else
        printf("%d is not a Harshad Number",t);
}

