//Demonstrate structure pointer.
#include<stdio.h>
    
struct S
    {
        char n[20];
        int roll;
    };
void main(){
    struct  S  s1;
    printf("Enter an integer: ");
    scanf("%d",&s1.roll);

    int *ptr1=&(s1.roll);
    printf("num= %d\n",*ptr1);
   
   fflush(stdin);
   printf("Enter a string:");
   gets(s1.n);


   printf("\n%s",s1.n);
}