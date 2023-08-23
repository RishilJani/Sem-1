#include<stdio.h>
void main(){
	char a;
	printf("enter a charater:");
	scanf("%c",&a);
	if (a=='a'||a=='i'||a=='e'||a=='o'||a=='u'){
		printf("Character is vovel");
	}
	else {
		printf("Character is consonant");
	}
}
