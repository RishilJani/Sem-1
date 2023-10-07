//Read values in two-dimensional array and print them in matrix form.
#include<stdio.h>
void main(){
	int i,j,r,c;
	printf("Enter no of raw and col. = ");
	scanf("%d,%d",&r,&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter a[%d][%d] element= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
