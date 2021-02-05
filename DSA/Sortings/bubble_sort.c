/*Name:N.Yashwanth 
   ID:B171561
   Question:bubble sort
*/

#include <stdio.h>

void bubble(int a[],int n)
{
  int temp,i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
        {
           temp=a[j+1];
           a[j+1]=a[j];
           a[j]=temp;
        }
    }
 }
}
int main()
{
  int n,i;
  int a[100];
  printf("enter the length of array:");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
  	  printf("enter element %d: ",i+1);
     scanf("%d",&a[i]);

  }

 bubble(a,n);
printf("array after sorting:");
for(i=0;i<n;i++)
  printf("%d ",a[i]);
}

