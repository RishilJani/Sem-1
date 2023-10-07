//Search element in array.
#include<stdio.h>
void main(){
	int n,i,e;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("%d number= ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Enter element for search: ");
	scanf("%d",&e);
	
	for(i=0;i<n;i++){
		if(a[i] == e){
			printf("%d element is on index %d\n",e,i);
		}
	}
}
