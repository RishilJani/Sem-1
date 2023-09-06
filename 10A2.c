//Find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
void main(){
	int i=1,n,sum=0,a;
	float b=1.0,avg;
	printf("How many numbers do you want to enter? : ");
    scanf("%d",&n);
    while(n>0){
	printf("Enter %d number: ",i);
	scanf("%d",&a);
	sum=sum+a;
	avg=sum/b;
	i++;
	b++;
	n--;
} 
    printf("Sum = %d",sum);
    printf("\nAvg = %f",avg);
}
