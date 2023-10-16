//Add two matrix using pointers.
#include<stdio.h>
void main(){
	int m,n,i,j;
	
	printf("Enter m rows& n rows: ");
	scanf("%d %d",&m,&n);
	
	int a[m][n],b[m][n],c[m][n];
	int *pa,*pb;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			pa=&a[i][j];
			pb=&b[i][j];
			c[i][j] = *pa+*pb;
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
