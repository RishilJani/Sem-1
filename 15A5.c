//Input a string in character array and print string and length of string.
#include<stdio.h>
void main(){
	int n,i;
	
	printf("Enter number of characters : ");
	scanf("%d",&n);
	
	char a[n];
	for(i=0;i<n;i++){
		printf("%d char = ",i);
		scanf(" %c",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%c",a[i]);
	}
	printf("\nlenth of string is = %d",n);
}
