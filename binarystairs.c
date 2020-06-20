#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the number of stairs:");
scanf("%d",&n);
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("01");
}
printf("\n");
}
}
