// Demonstrate difference between structure and union.
#include<stdio.h>
struct s1
{
    int i;
    char c;
};
union u1
{
    int j;
    char d;
};

void main(){
    struct s1 r;
    r.i=5;
    r.c='A';
    
    union u1 s;
    s.j=56;
    s.d='B';

    printf("Struct int =%d\n",r.i);
    printf("Struct char =%c\n",r.c);
    printf("union int =%d\n",s.j);
    printf("union char =%c\n",s.d);
}