//Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
void main(){
	int n,i,pos=0,neg=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int num[n];
	for(i=1;i<=n;i++){
		printf("%d num is =",i);
		scanf("%d",&num[i]);
	}
	for(i=1;i<=n;i++){
		if(num[i]>0){
			pos=pos+1;
		}
		else{
			neg=neg+1;
		}
	}
	printf("Positive:Negative = %d:%d",pos,neg);
}
