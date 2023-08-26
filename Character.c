//Check whether the entered character is upper case, lower case, digit or any special character.
#include<stdio.h>
void main(){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>='A'&& a<='Z'){
        printf("Character %c is Uppercase",a);
    }
    else if(a>='a'&& a<='z'){
        printf("Character %c is Lowercase",a);
    }
    else     if(a>='0'&& a<='9'){
        printf("Character %c is Digit",a);
    }
    else if(a=='!'||a=='@'||a=='#'||a=='$'||a=='*'||a=='&'){
    	printf("Character %c is a Sprcial character",a);
	}
}

