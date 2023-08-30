#include<stdio.h>
void main(){
	int a,b,c;
	char x;
	float d;
	printf("Enter opretion (+,-,*,/): ");
	scanf("%c",&x);
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	
	switch(x){
		case '+' :{
		    c=a+b;
	     	printf("Addition of 2 numbers is: %d",c);
			break;
		}
		
	    case '-':{
	    	c=a-b;
     		printf("Substraction of 2 numbers is: %d",c);
			break;
		}
 
	    case '*':{
	    	c=a*b;
		printf("Multiplication of 2 numbers is: %d",c);
			break;
		}
	    case '/':{
	 	    d=(float)a/b;
		printf("Divison of 2 numbers is: %f",d);
			break;
		}
		default:{
			printf("valid");
			break;
		}
	}
}
