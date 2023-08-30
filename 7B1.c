//Read 3 numbers, multiply largest number from first two numbers to third one using switch.
#include<stdio.h>
void main(){
	int a,b,c,d,max;
	printf("Enter 3 no: ");
	scanf("%d,%d,%d",&a,&b,&c);
	max=(a>b)?a:b;
	d=max*c;
	printf("Largest no is : %d",d);
}
