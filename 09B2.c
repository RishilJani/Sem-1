/*Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5, IX:9, 
X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000)*/
#include<stdio.h>
void main(){
	int num;
	printf("Enter an Interger: ");
	scanf("%d",&num);
	printf("Roman is = ");
	while(num>0){
		if(num>=1000){
			printf("M");
			num=num-1000;
		}
		else if(num>=900){
			printf("CM");
			num=num-900;
		}
		else if(num>=500){
			printf("D");
			num=num-500;
		}
		else if(num>=400){
			printf("CD");
			num=num-400;
		}
		else if(num>=100){
			printf("C");
			num=num-100;
		}
		else if(num>=90){
			printf("XC");
			num=num-90;
		}
		else if(num>=50){
			printf("L");
			num=num-50;
		}
		else if(num>=40){
			printf("XL");
			num=num-40;
		}
		else if(num>=10){
			printf("X");
			num=num-10;
		}
		else if(num>=9){
			printf("IX");
			num=num-9;
		}
		else if(num>=5){
			printf("V");
			num=num-5;
		}
		else if(num>=4){
			printf("IV");
			num=num-4;
		}
		else if(num>=1){
			printf("I");
			num=num-1;
		}
	}
}
