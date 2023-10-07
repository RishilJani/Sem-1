//Count total number of negative elements in array.
#include<stdio.h>
void main(){
	int i,n,count=0;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("%d number= ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i] < 0){
			count++;
		}
	}
	printf("Number of negaive elements = %d",count);
}
