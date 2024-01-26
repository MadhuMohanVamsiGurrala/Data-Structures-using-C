#include<stdio.h>
#include<conio.h>

void main( )
{
clrscr( )
int factorial(int);
int n,f;
printf("Enter the number: ");
scanf("%d",&n);
f=factorial(n);
printf("Factorial of the number is %d",f);
getch();
}
int factorial(int n)
{
int f;
if(n==1)
return 1;
else
f=n*factorial(n-1);
return f;
}
