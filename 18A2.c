//Find maximum and minimum between two numbers using function.
#include<stdio.h>
int max(a,b){
	int m;
	if(a>b){m=a;}
	else{m=b;}
	return m;
}
int min(a,b){
	int mi;
	if(a<b){mi=a;}
	else{mi=b;}
	return mi;
}

int main(){
	int a,b;
	printf("Enter 1st num= ");
	scanf("%d",&a);
	printf("Enter 2st num= ");
	scanf("%d",&b);
	
	printf("max:min = %d:%d",max(a,b),min(a,b));
}
