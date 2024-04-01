#include<stdio.h>
#include<stdlib.h>
#define Maxsize 5
int f=-1,r=-1,q[Maxsize];
void insert()
{
  int item;
  if(r==Maxsize-1)
     printf("OVERFLOW!!!");
  else{
     if(f==-1)f=0;
     printf("enter the items to be inserted: \n");
     scanf("%d",&item);
     q[++r]=item;
     }
}
void delete(){
     if(f==-1)
     printf("UNDERFLOW!!!");
     else if(f>r)
     {
     f=r=-1;
     printf("UNDERFLOW!!!");
     }
     else
     {
     printf("items deleted=%d",q[f++]);
     }
     }
void display(){
     int i;
     if(f==-1)
     printf("UNDERFLOW!!!");
     else
     {
     printf("the element are :");
     for(i=f;i<=r;i++)
     printf("%d",q[i]);
     }
     }
void main()
{
int ch;
for(;;)
{
     printf("\n 1.INSERT \n 2.DELETE \n 3.DISPLAY \n 4.EXIT \n");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:printf("INSERT\n");
            insert();
            break;
     case 2:printf("DELETE\n");
            delete();
            break;
     case 3:printf("DISPLAY\n");
            display();
            break;
                  
     default:exit(0);
     }
     }
     }
     
     
     
   
     
     
     
  
