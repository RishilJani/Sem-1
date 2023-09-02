//Print first 50 numbers in series 1,4,7,10…
#include<stdio.h>
void main(){
	int a=1,d=3,n=1,s;
	while(n<=50){
		s=a+(n-1)*d;
		printf("\n%d",s);
		n++;
	}
}
