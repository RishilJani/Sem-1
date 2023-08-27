// Determine the roots of the equation ax2+bx+c=0.
#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c;
	float x1,x2;
	printf("Enter the value of a,b,c: ");
	scanf("%d,%d,%d",&a,&b,&c);
	x1=(-b+(sqrt((b*b)-4*a*c)))/(2*a);
	x2=(-b-(sqrt((b*b)-4*a*c)))/(2*a);
	printf("Roots of th equation is: %f,%f",x1,x2);
}
