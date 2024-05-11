#include <stdio.h>
#include<math.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before Swapping:\n\ta:%d \n\tb:%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping:\n\ta:%d \n\tb:%d",a,b);
}

