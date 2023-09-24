//Read five person height and weight and count the number of person having height greater than 170 and 
//weight less than 50.
#include<stdio.h>
void main(){
	int i,count=0;
	int h[5],w[5];
	
	for(i=0;i<5;i++){
		printf("Enter %d presron height,weight: ",i+1);
		scanf("%d,%d",&h[i],&w[i]);
	}
	for(i=0;i<5;i++){
		if(h[i] >170 && w[i] <50){
			count=count+1;
		}
	}
	printf("Count = %d",count);
}

