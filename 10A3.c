//Find whether the given number is prime or not.
#include<stdio.h>
void main(){
	int a,count=0,i=1;
	printf("Enter a number: ");
	scanf("%d",&a);
	while(i<=a){
		if(a%i==0){
			count=count+1;
		}
		i++;
	}
	if(count==2){ printf("Prime");}
	else{printf("Not prime");}
}
