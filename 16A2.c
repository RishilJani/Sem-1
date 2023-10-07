// Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
void main(){
	int i,j,n=9,pos=0,neg=0,zero=0;
	int a[3][3],b=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter a[%d][%d] ele: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<=3;i++){//i=1
		for(j=1;j<=3;j++){//j=1
			
			b=a[i][j];
		
			if(b == 0){//a[1][1]=1
				zero++;	
			}
			else if(b > 0){
				pos++;
			}
			else if(b < 0){
				neg++;
			}
		}
	}	
	printf("\nPositive numbers=%d",pos);
	printf("\nNegative numbers=%d",neg);
	printf("\nZeros =%d",zero);
}
