#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
    for(int j=0;j<=i;j++)
    printf("%c",65+j);
    for(int j=0;j<a-i;j++)
    printf("%c",97+j);
    printf("\n");
    }
}
