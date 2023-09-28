//Find missing numbers of sequence using array.(in a sequence 1,2,4,5,7,8,10, Missing numbers are 3,6,9)
#include<stdio.h>
void main(){
	
	int i,n,d;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("%d number = ",i+1);
		scanf("%d",&a[i]);
	}
	d=a[1]-a[0];
	for(i=0;i<n-1;i++){
		if(a[i+1] != a[i] +d){
			printf("missing number is= %d\n",a[i] + d);
		}
	}
}
