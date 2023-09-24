//Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).
#include<stdio.h>
void main(){
	int n,i,j,a=0,b=-1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){//i=2
		for(j=1;j<=i;j++){//j=1
			a=a+j;
		}
	}
	printf("sum = %d",a);
}
