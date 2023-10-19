//Count simple interest using function.
#include<stdio.h>
float in(p,r,t){
	float i=0;
	i=p*r*t/100;
	return i;
}

int main(){
	int p,r,t;
	
	printf("Enter p=");
	scanf("%d",&p);
	printf("Enter r=");
	scanf("%d",&r);
	printf("Enter t=");
	scanf("%d",&t);
	
	printf("Interest = %f",in(p,r,t));
	return 0;
}
