#include<stdio.h>
void main(){

	float s,h,d,t;
	printf("Enter your salary:");
	scanf("%f",&s);
	if((s>=10000) && (s<20000)){
		h=0.20*s;
		d=0.80*s;
		t=s+h+d;
		printf("Your gross salary is: %f",t);
	}
	else if((s>=20000) &&(s<30000)){
		h=0.25*s;
		d=0.90*s;
		t=s+h+d;
		printf("Your gross salary is: %f",t);
	}
	else if (s>=30000){
		h=0.30*s;
		d=0.95*s;
		t=s+h+d;
		printf("Your gross salary is: %f",t);
	}
	}
	

