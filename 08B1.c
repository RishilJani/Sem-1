//Print number and its square root for 0 to 9.
#include<stdio.h>
#include<math.h>
void main(){
	float a=0,b;
	while(a<10){
		b=sqrt(a);
		printf("\n%f = %f",a,b);
		a++;
	}
}
