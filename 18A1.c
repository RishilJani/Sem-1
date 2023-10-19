//Add two numbers using function.
#include<stdio.h>
int sum(a,b){
	int c;
	c=a+b;
	return c;
}
int main(){
	int a,b;
	printf("Enter 1st num= ");
	scanf("%d",&a);
	printf("Enter 2st num= ");
	scanf("%d",&b);
	
	printf("sum= %d",sum(a,b));
}
