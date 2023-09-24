//Calculate x^y without using power function and without using multiplication. 
#include<stdio.h>
void main(){
	int x,y,i,b,a,res=0;
	printf("Enter values of x,y: ");
	scanf("%d,%d",&x,&y);
	a=x;
	res=x;
	for(i=1;i<y;i++){
		for(b=1;b<a;b++){
		res=res+x;
		}
	x=res;	
	}
     printf("x^y= %d",res);
}

