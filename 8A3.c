//Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter 1st no: ");
	scanf("%d",&a);
	printf("Enter 2ed no: ");
	scanf("%d",&b);
	
	while(a<=b){
		if(a%2==0){
			printf("\n%d",a);
		}
		a++;
	}
}
