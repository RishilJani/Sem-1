//Find a character from given string.
#include<stdio.h>
void main(){
	int i;
	char str[100],ch;
	
	printf("Enter a string:\n");
	gets(str);
	
	printf("Enter a character:");
	scanf("%c",&ch);
	
	printf("Given char is on index:");
	for(i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			printf("%d,",i);
		}
	}
	printf("\b ");
}
