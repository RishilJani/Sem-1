#include<stdio.h>
void main(){
	int a,b,c,x;
	float d;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	printf("Enter opretion (Add=1/Substrac=2/Multiply=3/Divide=4): ");
	scanf("%d",&x);
	if(x==1){
		c=a+b;
		printf("Addition of 2 numbers is: %d",c);
	}
	else if(x==2){
		c=a-b;
		printf("Substraction of 2 numbers is: %d",c);
	} 
	else if(x==3){
		c=a*b;
		printf("Multiplication of 2 numbers is: %d",c);
	}
	else if(x==4){
		d=(float)a/b;
		printf("Divison of 2 numbers is: %f",d);
	}
}
