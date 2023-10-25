//Scan a character string passed as an argument and convert all lowercase string to uppercase string.
#include<stdio.h>
char *upper(char s1[]);
void main(){
	char s1[100];
	
	printf("Enter a string:\n");
	gets(s1);
	
	puts(upper(s1));
}
char *upper(char s1[]){
	int i;
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]>='a' && s1[i]<='z'){
			s1[i]=s1[i]-32;
		}
	}
	return s1;
}
