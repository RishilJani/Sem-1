//Print given number in reverse order.
#include<stdio.h>
void main(){
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Reversed number is = ");
    while(n>0){
    	i=n%10;
    	printf("%d",i);
    	n=n/10;
	}
    }
