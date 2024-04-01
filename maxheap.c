#include <stdio.h>
#include <stdlib.h>
#define maxsize 10
int insertion(int item,int a[],int n)
{
 int c,p;
 if(n==maxsize)
 {
   printf("heap is full!!!\n");
   return 0;
   }
   c=n;
   p=(c-1)/2;
   while(c!=0 && item>a[p])
   {
     a[c]=a[p];
     c=p;
     p=(c-1)/2;
    }
    a[c]=item;
    return n+1;
    }
    void display(int a[],int n)
    {
     int i;
     if(n==0)
     {
       printf("heap is empty!!!\n");
       return;
       }
       printf("the array elements are\n");
       for(i=0;i<n;i++)
       printf("%d",a[i]);
       }
       void main()
       {
       int a[maxsize],n=0,ch,item;
       for(;;)
       {
       printf("\n 1.INSERT 2.DISPLAY 3.EXIT \n");
       scanf("%d",&ch);
       switch(ch)
       {
         case 1: printf("enter the element");
                 scanf("%d",&item);
                 n=insertion(item,a,n);
                 break;
         case 2: display(a,n);
                 break;
         default:exit(0);
         }
         }
         }
         
   
