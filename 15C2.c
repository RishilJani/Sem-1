//Insert new value in the sorted array
#include<stdio.h>
void main(){
	int i,n,j,temp;
	int ind,ins;
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
	
	printf("Enter index number to insert a element & num : ");
	scanf("%d,%d",&ind,&ins);
	n=n+1;	
	for(j=n;j>ind;j--){
			a[j] = a[j-1];
		}
	a[ind] = ins;
	
	for(i=0;i<n;i++){
		printf("%d element = %d\n",i,a[i]);
	} 
}
/*
0 1 2 3 4 5
5 4 3 2 1 0
*/
