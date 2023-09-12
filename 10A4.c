//Print digits of given number.
#include<stdio.h>
void main(){
	int n,i,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>0){
		if(n>=0 && n<10){
			printf("%d",n);
		}
		else if (n>=10 && n<100){
			printf("%d,%d",n/10,n%10);
		}
		else if (n>=100 && n<1000){
			i=n/100;
			n=n%100;
			printf("%d,%d,%d",i,n/10,n%10);
		}
		else if (n>=1000 && n<10000){
			i=n/1000;
			a=n%1000;
			n=a%100;
			printf("%d,%d,%d,%d",i,a/100,n/10,n%10);
		}
		break;
	}
}
