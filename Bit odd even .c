//Input an integer number and check the last digit of number is even or odd.
#include<stdio.h>
void main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if((a%10)%2 ==0){
		printf("Number is Even");
	}
	else {
		printf("Number is Odd");
	}
}



/*#include<stdio.h>
void main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==1){
		printf("Number is odd");
	}
	else if(a%2==0){
		printf("Number is even");
	}
}
*/
