#include<stdio.h>                                
#include<time.h>
void main()
{
    time_t t;
    time(&t);
    printf("\nThis Program Has Been Written At (Date And Time): %s", ctime(&t));
}
