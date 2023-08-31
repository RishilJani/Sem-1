//Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
void main(){
	int a,b,c,d,e,f,g,h,i,j;
	int odd=0,even=0;
	printf("Enter 10 numbers: ");
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	
		if(a%2==0){    //1
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(b%2==0){    //2
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(c%2==0){   //3 
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(d%2==0){   //4
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(e%2==0){  //5
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(f%2==0){ //6
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(g%2==0){  //7
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(h%2==0){  //8
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(i%2==0){ //9
		even=even+1;}
		else{
			odd=odd+1;
		}
		if(j%2==0){  //10
		even=even+1;}
		else{
			odd=odd+1;
		}
	
	printf("Odd:Even= %d:%d",odd,even);
}

