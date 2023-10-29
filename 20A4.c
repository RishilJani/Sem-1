//Create structure student with name, percentage and age. Read data of 5 students using array of structure.
#include<stdio.h>
struct student{
    char name[100];
    int per;
    int age;
};
void main(){
    struct student std[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter %d name:",i+1);
        gets(std[i].name);
        
        printf("Enter %d percentage:",i+1);
        scanf("%d",&std[i].per);

        printf("Enter %d age:",i+1);
        scanf("%d",&std[i].age);

        fflush(stdin);
    }

    for(i=0;i<5;i++){
        printf("%d name= %s\n",i+1,std[i].name);
        printf("Enter %d percentage: %d\n",i+1,std[i].per);
        printf("Enter %d age: %d\n\n",i+1,std[i].age);
    }
}