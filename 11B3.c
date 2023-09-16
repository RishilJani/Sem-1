//Print all ASCII character with their values.
//33-126
#include<stdio.h>
void main(){
	char c;
	for(c=33;c<=126;c++){
		printf("%d = %c\n",c,c);
	}
}
