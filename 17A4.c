//Swap value of two numbers using pointer
#include<stdio.h>
void main(){
	int a,b,temp;
	
	printf("Enter a & b =");
	scanf("%d %d",&a,&b);
	int *pa=&a,*pb=&b;
	temp = *pa;
	*pa  = *pb;
	*pb  = temp;
	
	printf("\na= %d,b= %d",*pa,*pb);
}
