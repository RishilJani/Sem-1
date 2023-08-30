//Check whether number is even number or odd number using conditional operator.
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter a no : ");
	scanf("%d",&a);
	b=(a%2==0)?0:1;
	if(b==0){
		printf("No. is Even");
	}
	else{
		printf("No. is Odd");
	}
}
