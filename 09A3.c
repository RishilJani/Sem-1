//Calculate x^y without using power function.
#include<stdio.h>
void main(){
	int x,y,a=1,i;
	printf("Enter value of x,y: ");
	scanf("%d,%d",&x,&y);
	while(i<=y){
		a=a*x;
		i++;
	}
	printf("%d^%d = %d",x,y,a);
}

