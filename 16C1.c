//Check a given matrix is a sparse matrix or not.
#include<stdio.h>
void main(){
	int i,j,n,z=0,nz=0;
	
	printf("Enter size of squre matrix =");
	scanf("%d",&n);
	int a[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j] == 0){
				z++;
			}
			else{
				nz++;
			}
		}
	}
	if(nz < z){
		printf("Sparse matrix");
	}
	else{
		printf("Not Sparse matrix");
	}
}
