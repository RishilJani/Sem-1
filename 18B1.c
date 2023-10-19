//Generate Fibonacci series of N given number using function name fibbo().
#include<stdio.h>
int fibbo(int num){
	if(num ==1 || num ==2){	return num-1; }
	else{
		return fibbo(num-1)+fibbo(num-2);
	}
}
int main(){
	int num,i;
	printf("Enter number of terms:");
	scanf("%d",&num);
	
	printf("Fiboo= ");
	for(i=1;i<=num;i++){
		printf("%d,",fibbo(i));
	}
	printf("\b ");
}

