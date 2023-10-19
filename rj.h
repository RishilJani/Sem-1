//Check whether a number is prime, Armstrong or perfect number using functions.(create custom library)
#include<stdio.h>
#include<math.h>
void prime(int num){
	int i,count;
	for(i=2;i<num;i++){
		if(num%i == 0){
			count++;
			break;
		}
	}
	if(count==0){
		printf("Prime\n");
	}
	else{
		printf("Not prime\n");
	}
}
void arm(int num){
	
	int a,i,res=0,digit=0;
	a=num;
	
	while(num>0){
		digit++;
		num=num/10;
	}
	num=a;
	while(num>0){
		i=num%10;
		res=res+pow(i,digit);
		num=num/10;
	}
	
	if(res==a){
		printf("Armstrong\n");
	}
	else{
		printf("Not Armstrong\n");
	}
}
void perfect(int num){
	
	int i=1,a=0;
	
	while(i<num){
		if (num%i==0){
			a=a+i;
		}
		i++;
	}
	if(a==num){
		printf("Perfect\n");
	}
	else{
		printf("Not Perfect\n");
	}
}

