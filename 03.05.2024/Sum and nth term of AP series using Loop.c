#include <stdio.h>
int main() {
    int a,n,d,ap=0,nth;
    scanf("%d %d %d",&a,&n,&d);
    for(int i=0;i<n;i++)
        nth=a+i*d;
    printf("nth term is %d\n",nth);
    for(int i=0;i<n;i++)
        ap+=a+i*d;
    printf("Sum of First n terms is %d",ap);
}

