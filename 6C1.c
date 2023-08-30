//Find the second largest number among three user input numbers.
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d,%d,%d",&a,&b,&c);
	
	if(a>b && a>c){
		if(b>c){
			printf("Second largest number is: %d",b);
		}
		else{
			printf("Second largest number is: %d",c);
		}
}
    else if(b>a && b>c){
    	if(a>c){
    		printf("Second largest number is: %d",a);
		}
		else {
			printf("Second largest number is: %d",c);
		}
	}
	else if(c>a && c>b){
		if(a>b){
			printf("Second largest number is: %d",a);
		}
		else{
			printf("Second largest number is: %d",b);
		}
	}
}
