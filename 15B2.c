//Reverse elements of an array without using second array.
#include<stdio.h>
void main(){
	int n,i,j,temp,c;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter %d number: ",i);
		scanf("%d",&a[i]);
	}
	if(n%2==0){
		for(i=0;i<(n/2);i++){
			temp = a[i];
			a[i] = a[(n-1)-i];
			a[(n-1)-i] = temp;
		}
	}
	else{
		c=a[n/2];
		for(i=0;i<(n/2);i++){
			temp = a[i];
			a[i] = a[(n-1)-i];
			a[(n-1)-i] = temp;
		}
		a[n/2 ]= c;
	}
	for(i=0;i<n;i++){
		printf("%d number = %d\n",i,a[i]);
	}
}
/*
a= 0 1 2 3 4 5
a= 1 2 3 4 5 6

a= 6 5 4 3 2 1
*/
