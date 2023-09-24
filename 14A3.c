//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
void main(){
	int n,i,odd=0,even=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int num[n];
	for(i=1;i<=n;i++){
		printf("%d num is =",i);
		scanf("%d",&num[i]);
	}
	for(i=1;i<=n;i++){
		if(num[i]%2==1){
			odd=odd+1;
		}
		else{
			even=even+1;
		}
	}
	printf("Odd:Even = %d:%d",odd,even);
}
 
