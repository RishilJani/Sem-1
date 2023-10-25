//Find factorial of a number using function and recursive function.
#include<stdio.h>
int factorial(int num){
	int i=1,n=1;
	while(i<=num){
		n=n*i;
		i++;
	}
	return n;
}
int factorec(int num){
	if(num == 0||num==1){
		return 1;
	}
	else{
		return num*factorec(num-1);
	}
}

void main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("Factorial without rec: %d",factorial(num));
	printf("\nFactorial with rec: %d",factorec(num));
}
