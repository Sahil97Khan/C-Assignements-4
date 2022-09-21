///Write a program to print the first 10 even natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
   int i,p;

   for(i=1;i<=10;i++)
   {
       p=2*i;
       printf("%d ",p);
   }

    getch();
}

