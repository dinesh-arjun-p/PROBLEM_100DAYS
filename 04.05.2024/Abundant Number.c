#include <stdio.h>
int main() {
    int a,sum=0;
    scanf("%d",&a);
    int div[a],j=0;
    for(int i=1;i<=a/2;i++)
        if(a%i==0)
            div[j++]=i;
    for(int i=0;i<=j;i++)
        sum+=div[i];
    if(sum>a)
    printf("%d is a Abundant Number",a);
    else
    printf("%d is not a Abundant Number",a);
}
