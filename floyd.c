#include<stdio.h>
#include<time.h>

int min(int a, int b){
return (a<b)?a:b;
}

void floyds(int cost[10][10], int n){
for(int k=1;k<=n;k++){
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
}
}
}
}

int main(){
int n,cost[10][10], source, i, j;
printf("enter the no. of vertices of the graph\n");
scanf("%d",&n);
printf("enter the cost of the graph\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
scanf("%d",&cost[i][j]);
}
}
floyds(cost,n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
printf("%d\t",cost[i][j]);
}
printf("\n");
}
}
