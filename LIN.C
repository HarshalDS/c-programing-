#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100];
 int i,no,size,flag=0,ch;
 clrscr();
 printf("\n \t Linear Search");
 printf("\n Enter array aize : ");
 scanf("%d", &size);
 printf("\n Enter array element : ");
   for(i=0;i<size;i++)
   {
     scanf("%d", &a[i]);
   }
   do
   {
     printf("\n Given array:-");
     for(i=0;i<size;i++)
     {
       printf("\n \t [%d]=%d",i,a[i]);
     }
   printf("\n Enter array Element you want to search : ");
   scanf("%d", &no);
   for(i=0;i<size;i++)
   {
     if(no==a[i])
      {
	printf("\n %d is present at [%d] locationi array\n",no,i);
	printf("\n %d coparator are requred for search the element\n",i+1);
	flag=1;
      }
   }
   if(flag==0)
   {
     printf("\n %d is Absent i given array\n",no);
   }
   flag=0;
   printf("\n \t 1:Search Again");
   printf("\n \t 2:Exit\n==>");

   scanf("\n %d",&ch);
   if(ch==2)
   {
     printf("\n**********Thank You**********");
   }
   }while(ch!=2);
   getch();
}
