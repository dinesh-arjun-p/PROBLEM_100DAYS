#include <stdio.h>
int main() {
    int a,n,d,ap=0,nth;
    scanf("%d %d %d",&a,&n,&d);
    nth=a+(n-1)*d;
    printf("nth term is %d\n",nth);
    ap=0.5*n*(2*a + (n-1)*d);
    printf("Sum of First n terms is %d",ap);
}

