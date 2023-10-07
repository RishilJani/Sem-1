// Copy all elements of one array to another.
#include<stdio.h>
void main(){
	int i,n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(i=0;i<n;i++){
		printf("%d number= ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n");	
	for(i=0;i<n;i++){
		b[i]=a[i];
		printf("%d number = %d\n",i+1,b[i]);
	}
}
