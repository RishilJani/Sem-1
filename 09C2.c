#include<stdio.h>
void main(){
    int i=4,c;
	printf("Enter a number: ");
	scanf("%d",&c);
	while(i>=0){
		if((c & (1 << i)) != 0){
        printf("1");
    }
	else{
        printf("0");
    }
    i--;
	}
    
}
