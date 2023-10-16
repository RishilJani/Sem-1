//Store n elements in an array and print the elements using pointer
#include<stdio.h>
void main(){
	int n,i;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	int *pa[n];
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		pa[i] =&a[i];
	}
	
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,*pa[i]);
	}
}
