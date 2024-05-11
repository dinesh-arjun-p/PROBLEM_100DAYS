#include <stdio.h>
int main() {
    int a,j=1,k=2;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%d ",j);
        j+=k++;
    }
}
