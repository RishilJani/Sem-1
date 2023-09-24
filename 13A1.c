#include<stdio.h>
void main(){
//13A1-a
	int i,j,c;
	for(i=1;i<=5;i++){
		for(j=1;(i+j)<=6;j++){
			printf("*");
		}
		printf("\n");
	}
	
//13A1-b
	int a=1;
	for(i=1;i<=5;i++){
		for(j=1;(i+j)<=6;j++){
			printf("%d",a);
			a++;
		}
		printf("\n");
		a=1;
	}
	
//13A1-c
	for(i=1; i<=5; i++){
		for(j=7; j>=i; j--)
		{
			printf(" ");
		}

		for(c=1; c<=i; c++)
		{ 
			printf("* ");
		}            
		
		printf("\n");
	}
	
//13A1-d
	for(i=1; i<=5; i++)
	{
		for(j=7; j>=i; j--)
		{
			printf(" ");
		}
		a=1;
		for(c=1; c<=i; c++)
		{ 
			printf("%d ",a);
			a++;
		}            
		
		printf("\n");
	}
}
