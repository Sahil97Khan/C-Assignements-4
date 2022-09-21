///Write a program to print the first 10 odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,p;
    for(i=1;i<=10;i++)
    {
        p=2*i-1;
        printf("%d ",p);

    }
    getch();
}
