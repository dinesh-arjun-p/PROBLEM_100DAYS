#include <stdio.h>
#include<math.h>
int main() {
    int a,len,rem;
    scanf("%d",&a);
    len=log10(a)+1;
    while(a!=0)
    {
        int x;
        x=pow(10,len-1);
        rem=a/x;
        printf("%d\n",rem);
        a=a%x;
        len--;
    }
}

