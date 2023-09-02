//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
#include<stdio.h>
void main(){
	int a=1,n,sum=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while(a<=n){
		if(a%2==0){
			sum =sum-a;
		}
		else{
			sum =sum+a;
		}
		a++;
	}
	printf("Sum if = %d",sum);
}

