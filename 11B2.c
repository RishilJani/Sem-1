//Count frequency of digits in an integer.
#include<stdio.h>
void main(){
	int n,d,i,count=0;
	printf("Enter number and digit: ");
	scanf("%d,%d",&n,&d);
	for(i=1;n>0;i++)
	{
		if(n%10==d){
			count=count+1;
		}
		n=n/10;
	}
	printf("Frequency of given digits is= %d",count);
}
