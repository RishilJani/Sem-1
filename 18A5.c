//Swap two numbers using call by value and call by reference.
#include<stdio.h>
void swap(int *pa,int *pb){
	int temp =*pa ;
	
	*pa=*pb;
	*pb=temp;
}
int main(){
	int a,b;
	
	printf("Enter 2 numbers= ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);	
	printf("a:b = %d:%d",a,b);
}
