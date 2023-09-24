//Read n numbers from user and print in normal and reverse order.
#include<stdio.h>
void main(){
	int n,i;
	printf("How many numbers do you want to enter? ");
	scanf("%d",&n);
	int num[n];
	for(i=1;i<=n;i++){
		printf("Enter %d number =",i);
		scanf("%d",&num[i]);
	}
	i=1;
	while(i<=n){
		printf("%d num is= %d,",i,num[i]);
		i++;
	}
	printf("\n");
	i=n;
	while(i>0){
		printf("%d num is= %d,",i,num[i]);
		i--;
	}
}
