//Calculate sum of two numbers using pointer.
#include<stdio.h>
void main(){
	int a,b;
	 
	printf("Enter a & b =");
	scanf("%d %d",&a,&b);
	
	int *pa=&a,*pb=&b;
	
	printf("sum = %d",*pa + *pb);
}
