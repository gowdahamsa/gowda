#include<stdio.h>
#include<string.h>
#include<math.h>

#define maxsize 30
int s[maxsize];
int top=-1;

int pop()
{
 if(top!=-1)
   return s[top--];
 else
 {
   printf("stack underflow \n");
    return 0;
    }
   }
   
void push(int item)
{
if(top!=maxsize-1)
  s[++top]=item;
else
  printf("\n stack overflow \n");
 }
 
int op(int op1,int op2,char symbol)
{
switch(symbol)
{
case '+': return op1+op2;
case '-': return op1-op2;
case '*': return op1*op2;
case '/': return op1/op2;
}
int isdigit(char symbol)
{
 return (symbol>='0' && symbol<='9');
 }}
 
 void main()
 {
   char symbol,postfix[30];
   int a,b,res,i;
   printf("enter postfix expression : \n");
   scanf("%s", postfix);
   for(i=0;i<strlen(postfix);i++)
   {
   symbol=postfix[i];
   if(isdigit(symbol))
     push(symbol-'0');
   else{
     a=pop();
     b=pop();
     res=op(b,a,symbol);
     push(res);
     }
     }
     
 printf("The result of expression is:\n");
 printf("%d \n",pop());
 }
 
 
 
