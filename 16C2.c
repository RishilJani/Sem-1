//Print the upper triangular matrix.
#include<stdio.h>
void main(){
	int i,j,a[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]= 0;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			a[i][j]=1;
		}
		a[i][i]=1;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
