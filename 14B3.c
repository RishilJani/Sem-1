//Sort elements of an array in an ascending order.
#include<stdio.h>
void main(){
	int i,n,j,temp;

	printf("Enter value of n: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("%d number = ",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
		
			if(a[i] > a[j]){
			
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
	
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d number = %d\n",i+1,a[i]);
		
	}
	
}
