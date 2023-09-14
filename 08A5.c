//Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
void main(){
	int a=1,n;
	int odd=0,even=0;
	
	while(a<=10){
		printf("Enter %d number: ",a);
		scanf("%d",&n);
		if(n%2==0){    
		even=even+1;
		}
		
		else{
			odd=odd+1;
		}
		a++;
	}
		
	
	printf("Odd:Even= %d:%d",odd,even);
}

