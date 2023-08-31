//Print number of days in a month considering leap year using switch.
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter month and year: ");
    scanf("%d,%d",&a,&b);
    if((b%4==0 && b%100!=0) || (b%400==0)){
    	switch(a){
    		case 1:
    		case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: printf("31 days");
			break;
			case 2: printf("29 days");
			break;
			default: printf("30 days");	
		}}
	else {
		switch(a){
    		case 1:
    		case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: printf("31 days");
			break;
			case 2: printf("28 days");
			break;
			default: printf("30 days");
	}
	}
}
