#include<stdio.h>
#include<stdlib.h>
struct employee
{
  int id;
  char name[50];
  float salary;
  };
void main()
{
  int i,n,ch,searchid;
  struct employee emp[10];
  printf("enter the number of employee: \n");
  scanf("%d",&n);
  printf("enter %d details of employee: \n",n);
  for(i=0; i<n; i++)
  {
    printf("enter the employee id: \n");
    scanf("%d", &emp[i].id);
    printf("enter the employee name: \n");
    scanf("%s", &emp[i].name);
    printf("enter the employee salary: \n");
    scanf("%f", &emp[i].salary);
    }
    while(1)
    {
      printf("\n 1.DISPLAY \n 2.SEARCH \n 3.EXIT \n enter your choice:\n");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:for(i=0;i<n;i++)
               {
                 printf( "Employee id:%d, Name:%s,Salary:Rs%f", emp[i].id,emp[i].name,emp[i].salary);
                 break;
                 }
        case 2: printf("enter the employee id to be searched : \n");
                scanf("%d", &searchid);
                for(i=0;i<n;i++)
                {
                   if(emp[i].id==searchid)
                   {
                      printf( "Employee id:%d, Name:%s,Salary:Rs%f", emp[i].id,emp[i].name,emp[i].salary);
                      break;
                  }
                  }
                  if(i==n)
                  {
                     printf("employee id not found");
                     break;
                     }
        case 3: exit(0);
        }
        }
        }
        
        
      
