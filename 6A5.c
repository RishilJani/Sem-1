/*Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class
between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 
70.*/
#include<stdio.h>
void main(){
	int m,s,g,e,h;
	float avg;
	printf("Enter marks of 5 subject: ");
	scanf("%d %d %d %d %d",&m,&s,&g,&e,&h);
	avg =((m+s+g+e+h)/500.0)*100.0;
	printf("Persantage is: %f",avg);
	if(avg<35.0){
		printf("\nFail");
	}
	else if(avg>=35.0 && avg<45.0){
		printf("\nPass Class");
	}
	else if(avg>=45.0 && avg<60.0){
		printf("\nSecond Class");
	}
	else if(avg>=60.0 && avg<70.0){
		printf("\nFirst Class");
	}
	else if(avg>=70.0){
		printf("\nDistinction");
	}
}

