//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main(){
	int a,sum;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a<10){
		printf("Sum is: %d",a);
	}
	else{
		if(a>=10 && a<100){
			sum= (a/10) + (a%10);
			printf("Sum is: %d",sum); 
		}
		else if(a>=100 && a<1000){
			sum= (a/100) + (a%10);
			printf("Sum is: %d",sum); 
		}
		else if(a>=1000 && a<10000){
			sum= (a/1000) + (a%10);
			printf("Sum is: %d",sum); 
		}
		else if(a>=10000 && a<100000){
			sum= (a/10000) + (a%10);
			printf("Sum is: %d",sum); 
		}
	}
}

