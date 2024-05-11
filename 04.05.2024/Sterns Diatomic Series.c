#include <stdio.h>
int main() {
    int st=1,last;
    scanf("%d",&last);
    int j=last;
    for(int i=st;i<=j;i++,last--)
        printf("%d %d ",i,last);
}
