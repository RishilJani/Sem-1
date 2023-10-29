//Add two distances in feet and inches using structure.i=f*12
#include<stdio.h>
struct sum{
    float inch;
    int feet;
}s1,s2;
int dis(int f,float inch,int num){
    int foot;
    foot=inch/12;
    inch=inch-(foot*12);

    foot = foot +f;
    if(num==1){
        return foot;
    } 
    else{
        return inch;
    }
}

void main()
{
    int f,feet;
    float i,inch;
    printf("Enter 1st value : ");
    scanf("%d %f",&s2.feet ,&s2.inch);

    printf("Enter 2st value : ");
    scanf("%d %f",&s1.feet ,&s1.inch);

    f = s1.feet + s2.feet;
    i = s1.inch + s2.inch;

    inch=dis(f,i,2);
    feet=dis(f,i,1);

    printf("Feet\' Inch\" = %d\' %.4f\" ",feet,inch);
}