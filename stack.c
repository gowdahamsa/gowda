#include<stdio.h>
#include<stdlib.h>
#define maxsize 2
int s[maxsize],top=-1;
void push(){
  int x;
  if(top==maxsize-1){
     printf("stack overflow\n");
     return;
     }
  printf("\n enter elements: ");
  scanf("%d",&x);
  top=top+1;
  s[top]=x;
  }
void pop(){
if(top==-1){
  printf("stack underflow\n");
  return;
  }
printf("popped element is %d",s[top]);
top=top-1;
}
void display(){
   int i;
   if(top==-1){
   printf("stack is empty");
   return;
}
else{
printf("contents of the stack n");
for(i=0; i<=top; i++){
printf("%d",s[i]);
}
}
}
void main(){
int ch,x;
for(;;)
{
printf(" \n 1.push \n 2.pop \n 3.display");
printf("\n enter the choice:");
scanf("%d", &ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;      
default:exit(0);
}
}
}
    
