#include <stdio.h>
#include<conio.h>
void main()
{
int i, n, fact=1,num;
printf("Enter the value of num");
scanf("%d",&num);
if(num<0)
printf("Error");
else
printf("Enter a number to calculate its factorial\n");
scanf("%d", &n);
for (i = 1; i <= n; i++)
fact = fact * i;
printf("Factorial of %d = %d\n", n, fact);
}
