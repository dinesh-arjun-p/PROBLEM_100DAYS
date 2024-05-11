#include <stdio.h>
int main() {
    int a,flag=0;
    scanf("%d",&a);
    int div[a],j=0;
    for(int i=1;i<=a/2;i++)
        if(a%i==0&&i*(i+1)==a)
        {
        flag=1;
        break;
        }
    if(flag==1)
    printf("%d is a Pronic Number",a);
    else
    printf("%d is not a Pronic Number",a);
}
