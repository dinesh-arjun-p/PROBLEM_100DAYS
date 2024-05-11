#include<stdio.h>
#include<math.h>
int main(){
	int n,m,flag=0,rem;
	scanf("%d",&n);m=n;
	while(n!=0){
	    rem = n%10;
	    if(rem==0){
	    flag=1;
	    break;
	    }
	    n/=10;
	}
	if(flag==1)
	printf("%d is a Duck Number",m);
	else
	printf("%d is not a Duck Number",m);
}

