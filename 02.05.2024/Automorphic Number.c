#include <stdio.h>
#include<math.h>
int main() {
    int a,b,len,x;
    scanf("%d",&a);
    b=pow(a,2);
    len=log10(a)+1;
    x=pow(10,len);
   if(b%x==a)
   printf("%d is a Automorphic Number",a);
   else
   printf("%d is not a Automorphic Number",a);
}

