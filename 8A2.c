//Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.
#include<stdio.h>
void main(){
	int a=0,n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while(a<n){
		a++;
		if(a%2==1){
			printf("\n%d",a);
		}
	}	
}
/*  do{
    if(a%2==1){
    printf("\n%d",a);
	}
	a++;}
	while(a<n);

*/
