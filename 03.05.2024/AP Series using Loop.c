#include <stdio.h>
int main() {
    int a,n,d,ap=0;
    scanf("%d %d %d",&a,&n,&d);
    for(int i=0;i<n;i++){
        ap=a+i*d;
        if(i==n-1)
        printf("%d.",ap);
        else
        printf("%d,",ap);
    }
}

