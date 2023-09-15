//Print the Fibonacci Series.(1, 1, 2, 3, 5, 8, 13, 21,...)
#include<stdio.h>
void main(){
	int n,i,a=1,b=1,c;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("1,1,");
	for(i=0;i<=n;i++){
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
}
