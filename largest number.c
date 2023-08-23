#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter 3 numbers ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("Largest number is %d",a);
		}
		else{
			printf("Largest number is %d",c);
		}
	}
	else {
		if(b>c){
			printf("Largest number is %d",b);
		}
		else{
			printf("Largest number is %d",c);
		}
	}
}
