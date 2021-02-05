/*Name:N.Yashwanth 
   ID:B171561
   Question:merge sort
*/

#include <stdio.h>
#include <stdlib.h>

void merge(int a[],int,int,int);
void mergesort(int a[],int,int);
void main()
{
   int a[100],i,n;
   printf("enter the size of the array:");
   scanf("%d",&n);
   printf("\n Enter the elements in the array:\n");
   for(i=0;i<n;i++)
   {
   	
   	  printf("enter element %d:",i+1);
      scanf("%d",&a[i]);
   }
 mergesort(a,0,n-1);
 printf("\n array after the sorting:");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
void merge(int a[],int beg,int mid,int end)
{
   int i=beg,j=mid+1,index=beg,temp[100],k;
  while((i<=mid)&&(j<=end))
  {
    if(a[i]<a[j])
    {
     temp[index]=a[i];
     i++;
    }
  else
  {
     temp[index]=a[j];
     j++;
  }
  index++;
 }
while(i<=mid)
{
   temp[index]=a[i];
    i++;
   index++;
}
while(j<=end)
{
  temp[index]=a[j];
  j++;
  index++;
}
for(k=beg;k<index;k++)
 a[k]=temp[k];
}
void mergesort(int a[],int beg,int end)
{
   int mid;
    if(beg<end)
    {
      mid=(beg+end)/2;
     mergesort(a,beg,mid);
     mergesort(a,mid+1,end);
    merge(a,beg,mid,end);
}
}

