/*Check whether the given number is palindrome or not.
(A palindromic number is a number (such as 16461) that remains the same when its digits are reversed).*/
#include<stdio.h>
void main(){
	int n,r=0,i,a;
	printf("Enter a number : ");
	scanf("%d",&n);
	a=n;
	 while(n>0){
    	i=n%10;
    	r=r*10+i;
    	n=n/10;
	}
	if(a==r){
		printf("Number is Palindromic.");
	}
	else{
		printf("Number is not Palindromic.");
	}
}

