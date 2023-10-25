//Pass an array in function to print array elements.
#include<stdio.h>
void *aprint(int arr[],int n);
void main(){
	int i,n;
	
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	aprint(arr,n);
}
void *aprint(int arr[],int n){
	int j;
	for(j=0;j<n;j++){
		printf("arr[%d]= %d\n",j,arr[j]);
		
	}
}
