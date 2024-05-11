#include <stdio.h>
int main() {
    int a,l,ap=0;
    scanf("%d %d",&a,&l);
    for(int i=a;i<=l;i++)
        ap+=i;
    printf("%d",ap);
}


