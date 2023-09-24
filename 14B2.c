//Calculate the average, geometric and harmonic mean of n elements in an array
#include<stdio.h>
#include<math.h>
void main(){
	int i,n,sum=0,x=1;
	float y=0,avg,geo,har;
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
		x=x*a[i];
	}
	geo=exp(log(x)/(float)n);
	
	for(i=0;i<n;i++){
		y=y+( 1.0/a[i] );
	}
	har=(float)n/y;
	
	printf("average = %.5f\n",avg);
	printf("geometric mean = %.5f\n",geo);
	printf("harmonic mean = %.5f",har);
}
/*

x=1
x=n1*n2*n3*n4*n5
*/
