#include<stdio.h>
void main(){
	int i,j,a=1,c,y=1;
	char x='A';
//13B1-a
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	printf("\n");
	
//13B1-b
	
//13B1-c
	for(i=1;i<=5;i++){
		
		for(a=1;a<=i;a++){
			printf(" ");
		}
		
		for(j=5;j>=i;j--){
			printf("* ");
		}
		
		printf("\n");
	}
	printf("\n");
	
//13B1-d
	for(i=1; i<=5; i++){
		for(j=7; j>=i; j--)
		{
			printf(" ");
		}

		for(c=1; c<=i; c++)
		{ 
			if(i%2==1){
				printf("%d ",y);
				y++;
			}
			else{
				printf("%c ",x);
				x++;
			}
		}            
		y=1;
		x='A';
		printf("\n");
	}
	printf("\n");
	
//13B1-e
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1 || i==5 || j==1 || j==5){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
