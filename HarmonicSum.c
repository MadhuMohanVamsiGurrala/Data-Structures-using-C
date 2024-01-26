/*a program in C to display the n terms of harmonic series and their sum. 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);
float sum=0;
int i;
for(i=1;i<=n;i++)
sum=sum + 1.0/i;
printf("%f is the harmonic sum \n",sum);
}
