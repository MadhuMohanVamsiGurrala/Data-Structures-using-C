#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,num=0,res;
printf("Enter the number=");
scanf("%d",&n);
res=n;
while(n!=0)
{
r=n%10;
num+=(r*r*r);
n=n/10;
}
if(res==num)
printf("This is Armstrong  number ");
else
printf("This is not a Armstrong number");
}
