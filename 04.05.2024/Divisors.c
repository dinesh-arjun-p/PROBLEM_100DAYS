#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int div[a],j=0;
    for(int i=1;i<=a/2;i++)
        if(a%i==0)
            div[j++]=i;
    div[j]=a;
    printf("Divisors of %d:",a);
    for(int i=0;i<=j;i++)
        printf("%d ",div[i]);
}
