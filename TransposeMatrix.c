//A c program for transpose of a matrix
#include<stdio.h>
void main()
{
int a[10][10],t[10][10],r=3,c=3,i,j;
printf("Enter elements in matix A:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
t[j][i]=a[i][j];
}
}
printf("Transpose of a matrix is:\n");
for (i=0; i<r; i++)
{
for (j=0; j < c; j++)
{
printf("%d\t", t[i][j]);
}
printf("\n");
}
}
