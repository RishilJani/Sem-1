//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.
#include<stdio.h>
struct book{
	char title[100];
	char author[100];
	char publication[100];
	int price;
};
void main(){
	int i;
	struct book s1[3];
	
	for(i=0;i<3;i++){
		printf("Enter title:");
		gets(s1[i].title);
	}
	
	for(i=0;i<3;i++){
		printf("Enter Author:");
		gets(s1[i].author);
	}	
	
	for(i=0;i<3;i++){
		printf("Enter Publication:");
		gets(s1[i].publication);
	}	
	
	for(i=0;i<3;i++){
		printf("Enter Price:");
		scanf("%d",&s1[i].price);
	}	
	for(i=0;i<3;i++){
		printf("\ntitle: %s",s1[i].title);
		printf("\nauthor: %s",s1[i].author);
		printf("\nPublication: %s",s1[i].publication);
		printf("\nPrice: %d\n",s1[i].price);	
	}
}
