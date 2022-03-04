#include<stdio.h>
void main()
{
int a[20],b[20],c[20],m,n,i,j,k=0;
printf("Enter the limit of 1st and 2nd array\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of first array\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements of second array\n");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
i=j=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
k=n+m;
printf("Sorted array\n");
for(i=0;i<k;i++)
{
printf("%d\t",c[i]);
}
}
