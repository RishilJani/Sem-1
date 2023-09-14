//Find factorial of the given number.
#include<stdio.h>
void main(){
	int n,a=1,i;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while(i<=n){
		a=a*i;
		i++;
	}
    printf("%d! = %d",n,a);
}
