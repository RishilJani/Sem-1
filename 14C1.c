//Count total duplicate elements in an array.
#include<stdio.h>
void main(){
	int n,i,j,count=1,temp;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		
		for(j=i+1;j<5;j++){
		
			if(a[i] > a[j]){
			
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
	
	for(i=0;i<n;){
		for(j=i+1;a[i]==a[j];j++){
			count++;
		}
		printf("%d dupicate = %d \n",a[i],count);
		count=1;
		i=j;
	}
}
