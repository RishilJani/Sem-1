//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()
#include<stdio.h>
#include<string.h>
void main(){
	int i;
	char arr1[100],arr2[100];
	
	printf("Enter arr1 string:\n");
	gets(arr1);
	
	printf("Enter arr2 string:\n");
	gets(arr2);
	
	printf("\nLenth of arr1= %d",strlen(arr1));
	printf("\nLenth of arr2= %d",strlen(arr2));
	printf("\nBy Comperiton= %d",strcmp(arr1,arr2));
	
	printf("\narr1 in rev =%s",strrev(arr1));
	printf("\narr2 in rev =%s",strrev(arr2));
	strrev(arr1);
	strrev(arr2);
	
	printf("\narr1 in lowercase=%s",strlwr(arr1));
	printf("\nstring cat = %s",strcat(arr1,arr2));
	printf("\nstring copy = %s",strcpy(arr1,arr2));
	
}
