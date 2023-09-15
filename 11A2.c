//Print sum of 1 to n numbers.
#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("Sum of 1 to %d numbers is= %d",n,sum);
}
