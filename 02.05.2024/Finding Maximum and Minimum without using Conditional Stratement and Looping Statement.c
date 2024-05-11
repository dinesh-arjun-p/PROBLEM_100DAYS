#include <stdio.h>
#include<stdlib.h>
int main() {
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    max=0.5*(abs(a-b)+(a+b));
    min=0.5*((a+b)-abs(a-b));
    printf("MAXIMUM: %d",max);
    printf("\nMINIMUM: %d",min);
}

