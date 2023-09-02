//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main(){
	char a='a',b='A';
	printf("Lower case alphabtes are :");
	while(a>='a' && a<='z'){
		printf("%c,",a);
		a++;
	}
	printf("\nUpper case alphabtes are :");
	while(b>='A' && b<='Z'){
		printf("%c,",b);
		b++;
	}
}
