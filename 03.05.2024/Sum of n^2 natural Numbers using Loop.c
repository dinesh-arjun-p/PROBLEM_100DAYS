#include <stdio.h>
int main() {
    int n,ap=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        ap+=i*i;
    printf("%d",ap);
}
