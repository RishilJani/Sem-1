#include<stdio.h>
#include<stdlib.h>    // to use system() method

void main()
{
    char c;
    
    printf("Do you want to shutdown your pc now (y/n)?");
    scanf("%c", &c);

    if(c == 'y'|| c == 'Y')
    {   
        system("C:\\WINDOWS\\System32\\shutdown /s");
    } 
    
}

