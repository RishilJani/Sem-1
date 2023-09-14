// Find factors of the given number.
#include<stdio.h>
void main(){
	int a=1,n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while(a<=n){
		if(n%a==0){
			printf("%d\n",a);
		}
		a++;
	}
}
