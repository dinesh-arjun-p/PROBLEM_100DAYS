#include <stdio.h>
int main() {
    int start,end;
    scanf("%d %d",&start,&end);
int odd[(end-start)/2+1],even[(end-start)/2+1],oddi=0,eve=0;
    for(int i=start;i<=end;i++){
    if(i%2==0)
    even[eve++]=i;
    if(i%2==1)
    odd[oddi++]=i;
    }
    oddi--;eve--;
    printf("Odd Numbers :");
    for(int i=0;i<=oddi;i++)
    printf("%d ",odd[i]);
    printf("\nEven Numbers :");
    for(int i=0;i<=eve;i++)
    printf("%d ",even[i]);
}
