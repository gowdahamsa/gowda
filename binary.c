#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node *left;
 struct node *right;
 };
typedef struct node nod;
nod* root=NULL;
void create(int x)
{
  nod *temp,*prev,*cur;
  temp=(nod*)malloc(sizeof(nod));
  temp->left=NULL;
  temp->right=NULL;
  temp->info=x;
  if(root==NULL)
  {
    root=temp;
    return;
  }
  prev=NULL;
  cur=root;
  while(cur!=NULL)
  {
    prev=cur;
    if(x<cur->info)
    {
      cur=cur->left;
    }
    else if(x>cur->info)
    {
      cur=cur->right;
    }
    else
    {
      printf("duplicate values not allowed\n");
    return;
    }
    }
    if(x<prev->info)
    {
      prev->left=temp;
    }
    else
    {
      prev->right=temp;
    }
    }
    void preorder(nod* root)
    {
      if(root!=NULL)
      {
        printf("%d",root->info);
        preorder(root->left);
        preorder(root->right);
        }
        }
        
    void inorder(nod* root)
    {
      if(root!=NULL)
      {
        inorder(root->left);
        printf("%d",root->info);
        inorder(root->right);
        }
        }
    void postorder(nod* root)
    {
      if(root!=NULL)
      {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->info);
        }
        }
    void main()
    {
      int item,ch;
      printf("binary search tree...\n");
      printf("1.create\n2.preorder\n3.inorder\n4.postorder\n5.exit\n");
      while(1)
      {
        printf("\n enter your choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: printf("\n enter the elements to be inserted :\n");
                scanf("%d",&item);
                create(item);
                break;
        case 2: printf("preorder\n");
                preorder(root);
                break;
        case 3: printf("inorder\n");
                inorder(root);
                break;      
        case 4: printf("postorder\n");
                postorder(root);
                break;        
        default:exit(0);
        }
        }
        }
        
      
    
    

