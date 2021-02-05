/*Name:N.Yashwanth 
   ID:B171561
   Question:quick sort
*/

#include <stdio.h>

int quicksort(int a[],int l,int h)
{ int pivot,i,j,temp,c=0;
  if(l<h)
  {
     pivot=l;
     i=l;
     j=h;
    while(i<j)
    {    printf("\n");
         while(a[i]<=a[pivot])
         {
             i++;
         }
         while(a[j]>a[pivot])
         {
            j--;
         }
       if(i<j)
       {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
      }
    
  }
  temp=a[j];
  a[j]=a[pivot];
  a[pivot]=temp;
 quicksort(a,l,j-1);
 quicksort(a,j+1,h);
 }
}
void main()
{
   int a[100],n,i,j;
   printf("enter length of array:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	 printf("enter element %d :",i+1);
     scanf("%d",&a[i]);
   }
   quicksort(a,0,n-1);
   for(j=0;j<n;j++)
   {
      printf("%d ",a[j]);
   }
}
