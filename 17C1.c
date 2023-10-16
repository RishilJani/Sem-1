//Find length of string using pointers.
#include<stdio.h>
void main(){
	int n,i=0,count=0;
	
	printf("Enter num char=");
	scanf("%d",&n);
	char a[n+1];
	
	printf("Enter strig:");
	
	for(i=0;i<n;i++){
		scanf("%c",&a[i]);
	}
	a[n]='\0';
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	int *p=&count;
	
	printf("\nnum of char in string = %d",*p);
}
