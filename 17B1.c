//Copy one array to another using pointers.
#include<stdio.h>
void main(){
	int n,i;
	
		printf("Enter number of elements:");
		scanf("%d",&n);
		int a[n],b[n];
		int *pa[n];
		for(i=0;i<n;i++){
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
			
			pa[i] =&a[i];
			b[i] = *pa[i];
		}
		
		for(i=0;i<n;i++){
			printf("\nb[%d] = %d",i,b[i]);
		}
}
