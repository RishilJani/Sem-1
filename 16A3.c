//Read and store the roll no and marks of 20 students using 2D array
#include<stdio.h>
void main(){
	int a[20][2],i,j;
	
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			if(j==0){
				printf("roll no= ");
				scanf("%d",&a[i][j]);
			}
			else{
				printf("marks= ");
				scanf("%d",&a[i][j]);
			}
		}
	}
	
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			if(j==0){
				printf("roll no= %d ",a[i][j]);
				
			}
			else{
				printf("marks= %d\n",a[i][j]);
				
			}
		}
	}
	
}
      
