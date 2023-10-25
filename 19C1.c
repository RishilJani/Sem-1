//Find reverse of any number using recursion.
#include<stdio.h>
int reverse(int num,int r){
	
	if(num){
		r= (r*10)+ num%10;
		return reverse(num/10,r);
	}
	else{
		return r;
	}
}

void main(){
	int num,rev,r=0;
	
	printf("Enter a num: ");
	scanf("%d",&num);
	
	rev=reverse(num,r);
	
	printf("%d",rev);
}

