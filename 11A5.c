//Find factorial of the given number.
#include<stdio.h>
void main(){
	int n,i,f=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("Factorial of given number is= %d",f);
}
