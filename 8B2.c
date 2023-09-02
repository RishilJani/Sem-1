//Print all integer greater than 100 and less than 200 that are divisible by 7 but not divisible by 5.
#include<stdio.h>
void main(){
	int a=101;
	while(a>100 && a<200){
		if(a%7==0 && a%5!=0){
			printf("\n%d",a);
		}
		a++;
	}
}
