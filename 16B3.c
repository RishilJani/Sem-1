// Read a matrix and print diagonal elements and its sum.
#include<stdio.h>
void main(){
	int i,j,n,sum=0;
	
	printf("Enter size of squre matrix =");
	scanf("%d",&n);
	int a[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("d[ ");
	for(i=0;i<n;i++){
		printf("%d ",a[i][i]);
		sum += a[i][i];		
	}
	printf("]");
	printf("\nSum= %d",sum);
}
