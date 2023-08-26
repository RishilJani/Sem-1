/*Input electricity unit charge and calculate the total electricity bill according to the given condition:
- For first 50 units Rs. 0.50/unit
- For next 100 units Rs. 0.75/unit
- For next 100 units Rs. 1.20/unit
- For unit above 250 Rs. 1.50/unit
- An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
void main(){
	int i;
	float a;
	printf("Enter electricity unit:");
	scanf("%d",&i);
	if(i<=50){
	a=(i*0.50);
	}
	else if(i>50 &&i<=150){//i>50 &&i<=150
	a=(i-50)*0.75 +25;
	}
	else if(i>150 && i<=250){
	a=25+100+(i-150)*1.20;
	}
	else if(i>250){
	a=25+100+300+(i-250)*1.5;
	}
	a=a+a*0.2;
	printf("Your bill: %f",a);
}
