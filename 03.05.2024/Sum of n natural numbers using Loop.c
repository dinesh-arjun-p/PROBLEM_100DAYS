#include <stdio.h>
int main() {
    int a=1,n,ap=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        ap+=a+i;
    printf("%d",ap);
}


