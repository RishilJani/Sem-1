//Add two times hh, mm and ss using structure.
#include<stdio.h>
struct time
{
    int hh;
    int mm;
    int ss;
}t1,t2;
int Time(int c,int b,int a,int num)
{
 int hr,m,h2;
 int min,hour,sec;
    hr=c/3600;
    m=(c-(hr*3600))/60;
    sec=c-(hr*3600)-(m*60);
    
    min=m+b;
    h2=min/60;
    min=min-(h2*60);

    hour= hr+h2+a;

    if(num==1){
        return sec;}
    else if(num==2){
        return min;}
    else if(num==3){
        return hour;}
}

void main(){
    int hour,min,sec;
    int a,b,c;
    printf("Enter 1st time : ");
    scanf("%d %d %d",&t1.hh,&t1.mm,&t1.ss);

    printf("Enter 2nd time : ");
    scanf("%d %d %d",&t2.hh,&t2.mm,&t2.ss);

    a=t1.hh + t2.hh;
    b=t1.mm + t2.mm;
    c=t1.ss + t2.ss;

    sec=Time(c,b,a,1);
    min=Time(c,b,a,2);
    hour=Time(c,b,a,3);

    printf("HH:MM:SS= %d:%d:%d",hour,min,sec);
}