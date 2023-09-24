//Count numbers higher than the average of an array.
#include<stdio.h>
void main(){
	int i,n,sum=0,count=0;
	float avg;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	avg=sum/(float)n;
	
	for(i=0;i<n;i++){
		if(a[i] > avg){
			count=count+1;
		}
	}
	printf("Count = %d",count);
}
