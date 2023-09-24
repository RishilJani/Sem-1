//Estimate the value of the mathematical constant e. (Formula: e= 1 +1/1!+1/2!+1/3!+1/4!…)
#include<stdio.h>
void main(){
	int i,j,n,c=1;
	float a=1,b=1;
	printf("enter value of n: ");
	scanf("%d",&n);//n=3
	
	for(i=1;i<n;i++){//i=2
	
		for(j=1;j<=i;j++){//j=1
	
		b=b*j;
	}
	a=a+(1.0/b);
	}
	printf("e = %f",a);
}

