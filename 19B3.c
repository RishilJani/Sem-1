//Swap elements of two integer arrays using user define function.
#include<stdio.h>
int swap(int a1,int a2,int num);
void main(){
	int i,n,num;
	
	printf("Enter value of n:");
	scanf("%d",&n);
	
	int a1[n],a2[n];
	for(i=0;i<n;i++){
		printf("a1[%d]= ",i);
		scanf("%d",&a1[i]);
	} 
	
	for(i=0;i<n;i++){
		printf("a2[%d]= ",i);
		scanf("%d",&a2[i]);
	}
	num=1;
	for(i=0;i<n;i++){
		printf("a1[%d]= %d\n",i,swap(a1[i],a2[i],num));
	}
	num=2;
	for(i=0;i<n;i++){
		printf("a2[%d]= %d\n",i,swap(a1[i],a2[i],num));
	}	
}
int swap(int a1,int a2,int num){
	int i,temp=0;
	
		temp =a1;
		a1 =a2;
		a2 =temp;
	if(num == 1){
		return a1;
	}
	else{
		return a2;
	}
}
