#include<stdio.h>
#include "rj.h"
void pnum(int num){
	int rev=0,i,a;
	
	for(i=0;num>0;i++){
		rev = (rev*10) + num%10;
		num=num/10;
	}
	
	for(i=0;rev>0;i++){
		a=rev%10;
		if(a==1) printf("one ");
		else if(a==2) printf("two ");
		else if(a==3) printf("three ");
		else if(a==4) printf("four ");
		else if(a==5) printf("five ");
		else if(a==6) printf("six ");
		else if(a==7) printf("seven ");
		else if(a==8) printf("eight ");
		else if(a==9) printf("nine ");
		else if(a==0) printf("zero ");
		rev=rev/10;
	}
}

void main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	pnum(num);
}
