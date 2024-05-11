#include <stdio.h>
int main() {
    int a,product=1;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
    scanf("%d",&arr[i]);
    product*=arr[i];
    }
    printf("Product:%d",product);
}
