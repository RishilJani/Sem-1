//Convert given number in words. (i.e. n=3456 -> output: Three Four Five Six)
#include<stdio.h>
void main(){
	int i,a;
	printf("Enter a number: ");
	scanf("%d",&a);

	while(a>=1000 && a<10000){
	
		i=a/1000;
		if(i==1){ printf("one ");}
        else if(i==2){ printf("two ");}
        else if(i==3){ printf("three ");}
        else if(i==4){ printf("four ");}
        else if(i==5){ printf("five ");}
        else if(i==6){ printf("six ");}
        else if(i==7){ printf("seven ");}
        else if(i==8){ printf("eight ");}
        else if(i==9){ printf("nine ");} 
	    else if(i==0){ printf("zero ");}
	     a=a-(i*1000);
	    break;
    }
   
	while(a>=100 && a<1000){
	
		i=a/100;
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
         a=a-(i*100);
        break;
	}	

    	while(a>=10 && a<100){
	
		i=a/10;
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
         a=a-(i*10);
        break;
	}
    	while(a>=0 && a<10){
		if(a==1){ printf("one ");}
        else if(a==2){ printf("two ");}
        else if(a==3){ printf("three ");}
        else if(a==4){ printf("four ");}
        else if(a==5){ printf("five ");}
        else if(a==6){ printf("six ");}
        else if(a==7){ printf("seven ");}
        else if(a==8){ printf("eight ");}
        else if(a==9){ printf("nine ");} 
        else if(a==0){printf("zero ");}
       
        break;
	}
}
