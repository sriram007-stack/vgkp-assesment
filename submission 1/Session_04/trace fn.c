#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int trace(int a[][100],int i,int j,int m,int n)
{
 int sum=0;
 if(m==n)
  {
  for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
    {
    if(i==j)
    sum=sum+a[i][j];
    }
   }
  printf("\nSum of diagonal elements = %d",sum);
  }
 else
 printf("\nNo diagonal elements");
 return 0;
}
int main()
{
int a[100][100],sum=0,i,j,m,n;
printf("Enter m & n:");
scanf("%d %d",&m,&n);
printf("Enter 1 matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",*(a+i)+j);
}
}
trace(a,i,j,m,n);
return 0;
}
