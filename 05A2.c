#include<stdio.h>

void main(){
	int a,b,t;
	printf("Enter no.1: ");
	scanf("%d",&a);
	printf("Enter no.2: ");
	scanf("%d",&b);
	t=a;	
	a=b;
	b=t;
	printf("no.1 is: %d",a);
	printf("\nno.2 is: %d",b);

}
