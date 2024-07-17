#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#define MAXSIZE 30000
#define NTIMES 5000
int partition(int a[],int low,int high)
{
int p,i,j,temp;
p = a[low];
i=low+1;
j=high;

while(1){
while((a[i]<=p)&&(i<high))
i++;
while((a[j]>p)&&(j>low))
j--;
if(i<j){
temp = a[i];
a[i]=a[j];
a[j]=temp;
}
else
{
temp = a[low];
a[low]=a[j];
a[j]=temp;
return j;
}
}
}

void quicksort(int a[],int low,int high){
int s;
if(low<high)
{
s= partition(a,low,high);
quicksort(a,low,s-1);
quicksort(a,s+1,high);
}
}
void main(){
int a[MAXSIZE],i,n,k;
clock_t start,end;
double runtime =0;
printf("Enter the size of array \n");
scanf("%d",&n);
for(k=0;k<NTIMES;k++)
{
srand(1);
for(i=0;i<n;i++)
a[i]=rand();
quicksort(a,0,n-1);
end = clock();
runtime = runtime +((end-start)/_SC_CLK_TCK);
}
runtime = runtime/NTIMES;
printf("\n Sorted elements are \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("Time taken for sorting is %lf seconds",runtime);
}
