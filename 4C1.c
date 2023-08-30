//Convert seconds into hours, minutes & seconds and print in HH:MM:SS.
#include <stdio.h>
void main()
{
 int res,sec,val,hr,min;
 scanf("%d",&val);
 hr=val/3600;
 min=(val-(hr*3600))/60;
 sec=val-(hr*3600)-(min*60);
 printf("HH:MM:SS= %d:%d:%d",hr,min,sec);
}	
