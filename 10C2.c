//Find HCF and LCM of two numbers.
#include<stdio.h>
void main (){
	int n1,n2,i=1,j,h;
	printf("Enter 2 numbers: ");
	scanf("%d,%d",&n1,&n2);
	j=(n1>n2)?n1:n2;
	while(i>=0){
		if(i%n1==0){
			if(i%n2==0){
				printf("%d is LCM of given numbers.",i);
				break;
			}
		}
		i++;
	}
	i=1;
	while(i<=j){
		if(n1%i==0){
			if(n2%i==0){
			h=i;	
			}
		}
		i++;
	}
	printf("\n%d is HCF of given numbers",h);
}
