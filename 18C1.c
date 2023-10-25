//Create a menu driven program to implement own string.h library. (without using built-in string functions)
#include<stdio.h>
#include "rjstr.h"
void main(){
	int i=0,j,n,num;
	char s1[100],s2[100],s3[100],s4[100];
	printf("Enter value of n(1=lenth/2=connect/3=compare/4=strncopy/5=strlower/6=end): ");
	scanf("%d",&n);
	
	while(n!=6){
		printf("\n");
		switch(n){
			case 1:{
					scanf("%s",&s1);

				printf("Length = %d",strln(s1));
			
				printf("\nEnter another value: ");
				scanf("%d",&n);
				break;
			}
			case 2:{

				scanf("%s",&s2);

				scanf("%s",&s3);
				
				printf("%s",strconn(s2,s3));
				printf("\nEnter another value: ");
				scanf("%d",&n);
				break;
			}
			case 3:{
				
				scanf("%s",&s2);
				
				scanf("%s",&s3);
				
				printf("r= %d",strcompair(s2,s3));
				printf("\nEnter another value: ");
				scanf("%d",&n);
				break;
			}
			case 4:{
				
				scanf("%s",&s2);
				
				scanf("%s",&s3);
				printf("Enter number:");
				scanf("%d",&num);
				
				printf("%s",strncopy(s2,s3,num));
			
				printf("\nEnter another value: ");
				scanf("%d",&n);
				break;
			}
			case 5:{
				scanf("%s",&s4);
				
				printf("%s",strlower(s4));
				
				printf("\nEnter another value: ");
				scanf("%d",&n);
				break;
			}
			default: {
				printf("Enter valid number: ");
				printf("\nEnter another value: ");
				scanf("%d",&n);
				break;
			}
		}
	}
	printf("Thank you");
}
