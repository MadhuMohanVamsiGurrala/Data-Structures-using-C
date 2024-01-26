//A c program to find multiplication of two square matrices
#include<stdio.h>
void main()
{
int a[10][10],b[10][10],mul[10][10],m=3,n=3,i,j,k;
//matrixA
printf("Enter elements in matix A:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
//matrixB
printf("Enter elements in matix B:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);

}
}
//multiplication of both matrices
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{

mul[i][j]=0;
for(k=0; k<m; k++)
{
mul[i][j] += a[i][k] * b[k][j];
}

}
}
//product of two matrices
printf("\n Multiplication result of the two given Matrix is:=\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}

