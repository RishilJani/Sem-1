//Replace a character in given string.
#include<stdio.h>
char *replace(char s1[],char a,char b);
void main(){
	char s1[100],a,b;
	
	printf("Enter a string:\n");
	gets(s1);
	
	printf("Enter char and char to replace with:");
	scanf("%c %c",&a,&b);
	
	puts(replace(s1,a,b));
}
char *replace(char s1[],char a,char b){
		int i;
		
		for(i=0;s1[i]!='\0';i++){
			if(s1[i] == a){
				s1[i] =b;
			}
		}	
		return s1;
}
