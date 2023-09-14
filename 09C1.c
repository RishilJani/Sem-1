//Convert given number in words. (i.e. n=3456 -> output: Three Four Five Six)
#include<stdio.h>
void main(){
	int i,a,r=0,n;
	printf("Enter a number: ");
	scanf("%d",&a);//3456
	n=a;
	while(n>0){
		i=n%10;
    	r=r*10+i;
    	n=n/10;
    }
    while(r>0){
		i=r%10;//6
		if(i==1){ printf("one ");}
        else if(i==2){ printf("two ");}
        else if(i==3){ printf("three ");}
        else if(i==4){ printf("four ");}
        else if(i==5){ printf("five ");}
        else if(i==6){ printf("six ");}
        else if(i==7){ printf("seven ");}
        else if(i==8){ printf("eight ");}
        else if(i==9){ printf("nine ");} 
        else if(i==0){printf("zero ");}
        r=r/10;
	}
	
}
