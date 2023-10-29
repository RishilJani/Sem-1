//Demonstrate nested structure.
#include<stdio.h>
#include<string.h>
struct company {
    char name[50];
    int no;
    
};
struct id {
    float num;
    char rj[50];
    struct company s1;
};
void main(){
    struct id n;

    printf("Enter string:\n");
    gets(n.rj);
    printf("Enter a num:");
    scanf("%d",&n.s1);

    printf("%s , %d",n.rj,n.s1);
}