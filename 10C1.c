//Check whether the given number is Armstrong or not.
#include<stdio.h>
#include<math.h>
void main(){
	int n,b,a,i,res=0,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=n;
	b=n;
	while(n>0){
		count=count+1;
		n=n/10;
	}
	while(a>0){
		i=a%10;
		res=res+pow(i,count);
		a=a/10;
	}
	
	if(res==b){
		printf("Number is Armstrong");
	}
	else{
		printf("Number is not Armstrong");
	}
}

