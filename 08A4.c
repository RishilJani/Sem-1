//Print sum of 1 to n numbers.
#include<stdio.h>
void main(){
	int a=1,n,sum=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while(a<=n){
		sum=sum+a;
		a++;
	}
	printf("%d",sum);
}
