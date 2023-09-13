//Check whether the given number is perfect or not.
#include<stdio.h>
void main(){
	int n,i=1,a=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<n){
		if (n%1==0){
			a=a+i;
		}
		i++;
	}
	if(a==n){
		printf("Given number is Perfect");
	}
	else{
		printf("Given number is not Perfect");
	}
}
