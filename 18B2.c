//Check whether a number is prime, Armstrong or perfect number using functions.(create custom library)
#include<stdio.h>
#include "rj.h"
void main(){
	int num;
	
	printf("Enter num: ");
	scanf("%d",&num);
	
	prime(num);
	arm(num);
	perfect(num);
	
}
