//. Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.
#include<stdio.h>
void main(){
	int n,sum;
	printf("Enter value of n: ");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6;
	printf("Sum of 1 + 4 + 9 +... is = %d",sum);
}
//Sigma(t=0 ->t=n)t^2 = n(n+1)(2n+1)/6
