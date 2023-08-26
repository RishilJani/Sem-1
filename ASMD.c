#include<stdio.h>
void main(){
	int a,b,c;
	char x;
	float d;
	printf("Enter opretion (+,-,*,/): ");
	scanf("%c",&x);
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	
	if(x=='+'){
		c=a+b;
		printf("Addition of 2 numbers is: %d",c);
	}
	else if(x=='-'){
		c=a-b;
		printf("Substraction of 2 numbers is: %d",c);
	} 
	else if(x=='*'){
		c=a*b;
		printf("Multiplication of 2 numbers is: %d",c);
	}
	else if(x=='/'){
		d=(float)a/b;
		printf("Divison of 2 numbers is: %f",d);
	}
}
