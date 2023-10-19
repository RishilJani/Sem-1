//Return the maximum of three floating-point numbers.
#include<stdio.h>
float max(a,b,c){
	float m=0;
	
	if(a>b){
		if(a>c){
			m=a;
		}
		else{
			m=c;
		}
	}
	
	else{
		if(b>c){
			m=b;
		}
		else{
			m=c;
		}
	}
	return m;
	
}
int main(){
	float a,b,c;
	
	printf("Enter 3 num: ");
	scanf("%f %f %f",&a,&b,&c);
	
	printf("Max = %f",max(a,b,c));
	return 0;

}
