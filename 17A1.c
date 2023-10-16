//Print value and address of a variable
#include<stdio.h>
void main(){
	int a;
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	
	int *ptr=&a;
	
	printf("address of a = %x",ptr);
	printf("\nvalue of a = %d",*ptr);
}
