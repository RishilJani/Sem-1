//Create a menu driven program to implement own string.h library. (without using built-in string functions)
#include<stdio.h>
int strln(char str[]){
	int i;
	
	for(i=0;str[i] !='\0';i++);
	
	return i;
}

char *strconn(char s2[],char s3[]){
	int i,j,c=0;
	for(i=0;s2[i] !='\0';i++);
	
	for(j=i;s3[c]!='\0';j++){
		s2[j] = s3[c];
		c++;
	}
	s2[j]='\0';
	
	return  s2;
}
char *strlower(char s2[]){
	int i;
	for(i=0;s2[i]!='\0';i++){
		if(s2[i] >=65 && s2[i] <=91){
			s2[i] = s2[i]+32;
		}
	}
	return s2;
}
int strcompair(char s1[],char s2[]){
	int i,r,l1,l2;
	l1=strln(s1);
	l2=strln(s2);
	if(l1>l2){
		r= 1;
	}
	else if(l1<l2){
		r =-1;
	}
	else {
		for(i=0;i<l1;i++){
			if(s1[i]==s2[i]){
				r=0;
			}
			else{
				r=1;
			}
		}
	}
	return r;
}

char *strncopy(char s1[],char s2[],int n){
	int j;
		
	for(j=0;j<n;j++){
		s1[j] = s2[j];
	}
	
	return s1;
}
