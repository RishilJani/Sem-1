//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
void main(){
	int n,max,min,sum=0,i;
	float avg;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	int num[n];
	
	for(i=0;i<n;i++){
		printf("%d number = ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++){
		sum=sum+num[i];
	}
	max=num[0];
	min=num[0];
	
	for(i=0;i<n;i++){
		if(max<num[i]){
			max=num[i];
		}
	}
	
	for(i=0;i<n;i++){
		if(min>num[i]){
			min=num[i];
		}
	}
	
	avg=sum/(float)n;
	
	printf("Min = %d\n",min);
	printf("Max = %d\n",max);
	printf("Sum = %d\n",sum);
	printf("Avg = %.4f\n",avg);
}
