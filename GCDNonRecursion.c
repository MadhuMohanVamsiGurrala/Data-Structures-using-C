#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcdnonR(int i,int j){
int rem;
rem=i-(i/j*j);
if(rem==0)
return j;
else
gcdnonR(j,rem);
}
void main(){
int a,b;
printf("enter the two numbers:");
scanf("%d%d",&a,&b);
printf("GCD of %d",gcdnonR(a,b));
getch();
}
