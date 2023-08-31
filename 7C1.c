//Check for equality of two numbers without using arithmetic or comparison opretor.
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter 2 numbers: ");
	scanf("%d,%d",&a,&b);
    
	if(a^b){
		printf("No are not same.");
	}
    else {
    	printf("No are  same.");
	}
	
}
