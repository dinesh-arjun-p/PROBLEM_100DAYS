#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
    for(int j=1;j<=6-i;j++)
        printf("*");
    printf("\n");
    }
}
