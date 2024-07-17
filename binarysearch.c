#include <stdio.h>
int BinarySearch(int array[],int low,int high,int element)
 {
  if(high >= low )
   {
    int middle = low + (high - low)/2;
    if (array[middle] == element)
     return middle;
    if (array [middle] > element)
     return BinarySearch (array,low,middle-1,element);
    return BinarySearch (array,middle+1,high,element);
   }
  return -1;
 }
int main()
{
 int array[30],n,element,i=0;
 printf("enter the no of elements:  ");
 scanf("%d",& n);
 printf("enter the element in sorted order:  ");
 for(i=0;i<n;i++)
  {
   scanf("%d",& array[i]);
  }
 printf("enter key value:  ");
 scanf("%d",& element);
 int found = BinarySearch(array,0,n,element);
 if(found==-1)
  printf("element is not found in array:  ");
 else
  printf("element found at index: %d",found);
 return 0;
}
