/*Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.*/
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter three sides of triangle : ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a==b && b==c){
		printf("triangle is equilateral");
	}
	else if(a==b || b==c || a==c){
		printf("triangle is isosceles");
	}
	else if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(b*b)+(a*a)){
	// by pythagoras theorem
	    printf("triangle is right angled");
	}
	else {
		printf("trianfle is scalene");
	}
}
