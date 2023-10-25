#include<stdio.h>
#include "per-com.h"
void main(){
	int n,r;
	printf("Enter n&r :");
	scanf("%d %d",&n,&r);
	
	printf("nCr = %d",nCr(n,r));
	printf("\nnPr = %d",nPr(n,r));
}
