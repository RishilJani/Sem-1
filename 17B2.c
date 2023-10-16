//Swap two arrays using pointers.
#include<stdio.h>
void main(){
	int n,i,temp;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	int a[n],b[n];
	int *pa,*pb;
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		printf("b[%d]= ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		pa=&a[i] , pb=&b[i];
		temp = *pa;
		*pa  = *pb;
		*pb  = temp;
		
		printf("\na[%d]=%d  b[%d]=%d",i,*pa,i,*pb);
	}	
}
