//Demonstrate int, float, double and char pointer
#include<stdio.h>
void main(){
	int a=100;
	float b=1.1;
	double c=1.5000;
	char d='A';
	
	int *pa=&a;
	float *pb=&b;
	double *pc=&c;
	char *pd=&d;
	
	printf("address of int a = %x",pa);
	printf("\nvalue of int a = %d",*pa);

	printf("\naddress of float b = %x",pb);
	printf("\nvalue of float b = %.2f",*pb);

	printf("\naddress of double c = %x",pc);
	printf("\nvalue of double c = %lf",*pc);	

	printf("\naddress of char d = %x",pd);
	printf("\nvalue of char d = %c",*pd);
}
