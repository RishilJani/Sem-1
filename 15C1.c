//Find two largest elements in a one dimensional array.
#include<stdio.h>
void main(){
	int n,i,j,max1,max2,temp;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
//read array	
	for(i=0;i<n;i++){
		printf("Enter %d number: ",i);
		scanf("%d",&a[i]);
	}
	//to find maximum value
	max1=a[0];
	for(i=0;i<n;i++){
		if(max1 < a[i]){
			max1=a[i];
			max2=a[i-1];
		}
	}
	printf("Largest num= %d\n",max1);
	
// to sort a[]
	
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
		
			if(a[i] > a[j]){
			
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
		
	for(i=1;i<a[n];i++){
		if(a[n-i] != max1){
		max2=a[n-i];
		break;
		}
	}
	printf("second largest num= %d",max2);
}

