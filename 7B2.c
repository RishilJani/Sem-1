//Check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
void main(){
	char a;
	int b;
	printf("Enter a character: ");
	scanf("%c",&a);
	b=((a>='A'&& a<='Z')||(a>='a'&& a<='z'))?1:0;
	if(b==1){
		printf("Character is an alphabate");
	}
	else{
		printf("Character is not an alphabate");
	}
}
