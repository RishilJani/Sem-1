#include<stdio.h>
void main(){
	int a,i;
	printf("Enter a number: ");
	scanf("%d",&a);
	i=a%7;
	switch(i){
	case 1 :
	printf("Monday");
	break;
	case 2:
	printf("Tuesday");
	break;
	case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	break;
	case 5:
	printf("Friday");
	break;
	case 6:
	printf("Saturday");
	break;
	default:
	printf("Sunday");
	break;
		
	}
}
