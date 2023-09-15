//Calculate x^y without using power function.
#include<stdio.h>
void main(){
	int x,y,i,a=1;
	printf("Enter value of x,y: ");
	scanf("%d,%d",&x,&y);
	for(i=0;i<y;i++){
		a=a*x;
	}
	printf("%d^%d = %d",x,y,a);
}

