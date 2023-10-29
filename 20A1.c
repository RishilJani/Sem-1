//Create, declare and initialize structure employee. 
#include<stdio.h>
#include<string.h>
struct employee{
	char name[100];
	int age;
	char gender;
};
void main(){
	int i,n,j;
		
	printf("Emter number of employee: ");
	scanf("%d\n",&n);
	//fflush(stdin);
	struct employee s1[n];	
	
	for(i=0;i<n;i++){
		gets(s1[i].name);
	}
	
	for(i=0;i<n;i++){
		printf("Enter %d age: ",i);
		scanf("%d",&s1[i].age);
	}
	
	for(i=0;i<n;i++){
		printf("Enter %d gender[M/F]:",i);
		scanf(" %c",&s1[i].gender);
	}
	
	for(i=0;i<n;i++){
		printf("Name : %s\n",s1[i].name);
		printf("age: %d \n",s1[i].age);	
		printf("Gender: %c \n",s1[i].gender);
	}
	
}
