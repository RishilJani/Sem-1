//Find power of any number using recursion.
#include<stdio.h>
#include<math.h>
int power(int base,int pow);
void main(){
	int base,pow,ans;
	
	printf("Enter base & power: ");
	scanf("%d %d",&base,&pow);
	
	ans=power(base,pow);
	printf("%d^%d = %d",base,pow,ans);
}
int power(int base,int pow){
	int i =pow;
	if(pow==0){
		return 1;
	}
	else if(pow==1){
		return base;
	}
	else if(i!=0){
		return (base*power(base,i-1));
	}
}
