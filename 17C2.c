//Sort array using pointers.
#include<stdio.h>
void main(){
	int n,i,j,temp;
	
	printf("Enter number of ele: ");
	scanf("%d",&n);
	int *a;
	
	for(i=0;i<n;i++){
		printf("a[%d] =",i);
		scanf("%d",a+i);
	}
	
	for(i=0;i<n;i++){
	
		for(j=i+1;j<n;j++){
			if( *(a+i) >*(a+j)){
				temp =*(a+i);
				*(a+i) =*(a+j);
				*(a+j) =temp;
			}	
		}
	}
	
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d number = %d\n",i,*(a+i));
		
	}
	
	
}
