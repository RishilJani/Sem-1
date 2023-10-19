//Find all prime numbers between given interval using functions.
#include<stdio.h>
void pnums(int num1,int num2){
	
	int i,j,count=0;
	for(i=num1;i<=num2;i++){
		
		count=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;}
		}
		
		if(count ==0){
			printf("%d,",i);
		}
	}
	
}

void main(){
	int num1,num2;
	
	printf("Enter 2 numbers :");
	scanf("%d %d",&num1,&num2);
	
	pnums(num1,num2);
}
