//Print multiplication table of a given number.
#include<stdio.h>
void main(){
	int a=1,n,b=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while(a<=10){
		printf("\n%d*%d = %d",n,a,(a*n));
		a++;
	}
}
