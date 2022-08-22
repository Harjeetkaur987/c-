#include<stdio.h>

int main()
{
    int i,j;
    i=1;
    printf("Asterisk number pattern\n\n");
    printf("Here your pattern\n\n");
 do{
    j=1;
 do{
    printf("*");
    j++;
 }while(j<=9);
    printf("*\n");
    i++;
    }while(i<=9);
    return 0;
 }
