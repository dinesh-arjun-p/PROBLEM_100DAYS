#include <stdio.h>
int main() {
    int a,flag=0;
    scanf("%d",&a);
    for(int i=2;i<=a/2;i++)
        if(a%i==0)
        {
        flag=1;
        break;
        }
    if(flag==1)
    printf("%d is not a Prime Number",a );
    else
    printf("%d is  Prime Number",a);
}
