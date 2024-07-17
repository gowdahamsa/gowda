#include<stdio.h>
#include<stdlib.h>
int n,a[10][10],visited[10];
void dfs( int u)
{
int v;
visited[u]=1;
for(v=1;v<=n;v++)
if (a[u][v]==1 && visited[v]==0)
dfs(v);
}
void main()
{
int i,j,source;
//clrscr();
printf("enter the number of vertices of graph");
scanf("%d", &n);
printf("enter the adjencey matrix...\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
visited[i]=0;
for(i=1;i<=n;i++)
{
dfs(i);
for(i=1;i<=n;i++)
{
if(visited[j]!=1)
{
printf("%d is not reachable from %d\n",j,i);
printf("so graph is not connected");
//getch();
exit(0);
}
}
for(j=1;j<=n;j++)
visited[j]=0;
}
printf("\n\n\n");
printf("graph is connected");
//getch();
}
