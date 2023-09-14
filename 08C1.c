//Calculate the square of integers 1 through 10.
#include<stdio.h>
#include<math.h>
void main(){
	int a=1,s;
	while(a<=10){
		s=pow(a,2);
		printf("\n square of %d is= %d",a,s);
		a++;
	}
}
