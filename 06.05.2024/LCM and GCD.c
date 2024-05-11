#include<stdio.h>
int main()
{
    int n1,n2,lcm,gcd;
    scanf("%d %d",&n1,&n2);
    int max=n1<n2?n2:n1;
    while(1)
    {
        if(max%n1==0&&max%n2==0)
        {
            printf("LCM:%d",max);
            break;
        }
        ++max;
    }
    gcd=n1*n2/max;
    printf("\nGCM:%d",gcd);
}
