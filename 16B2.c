//Perform Multiplication of two matrices.
#include<stdio.h>
void main(){
	int i,j,k,r,c;
	
	printf("Enter number of rows,column =");
	scanf("%d,%d",&r,&c);
	int a[r][c],b[r][c];
	int x[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("b[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
			x[i][j]=0;
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(k=0;k<c;k++){
				x[i][j]=x[i][j] + a[i][k]*b[k][j];
			} 
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}
