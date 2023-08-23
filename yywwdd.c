#include<stdio.h>
void main(){
	int y,w,d,t;
	printf("Enter days:");
	sacnf("%d",&t);
	y=t/365;
	w=(t-(y*365))/52;
	d=(t-(y*365)-(w*52));
	printf("YY:WW:DD %d:%d:%d:",y,w,d);
}
