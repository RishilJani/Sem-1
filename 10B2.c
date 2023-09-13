//Find whether the given number is prime or not using flag.
#include<stdio.h>
void main(){
	int i=2,n,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			count=count+1;
			break;
		}
		i++;
	}
    if(count==1){
    	printf("Number is not prime");
	}
	else{
		printf("Number is prime");
	}
	
}
