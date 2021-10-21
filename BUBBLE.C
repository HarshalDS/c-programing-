#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],si,i,j,temp=0;
clrscr();
printf("enter the size of array:");
scanf("%d",&si);
printf("\n enter the array of element:\n");
for(i=0;i<si;i++);
{
scanf("%d",&a[i]);
}
printf("the sorted list is:\n");
for(i=0;i<si-1;j++);
{
for(j=0;j<si-1;j++);
{
if(a[j]>a[j+1]);
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=a[j+1];
a[j+1]=temp
}
}
}
printf("%d\n",a[i]);
}
getch();
}