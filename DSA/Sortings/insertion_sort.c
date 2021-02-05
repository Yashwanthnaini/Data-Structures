/*Name:N.Yashwanth 
   ID:B171561
   Question:insertion sort
*/

#include <stdio.h>

void insertion(int a[],int n)
{
  int temp,j,i;
  for(i=1;i<n;i++)
  {
      temp=a[i];
      j=i-1;
    while(temp<a[j]&&j>=0)
    {
      a[j+1]=a[j];
     j--;
   }
  a[j+1]=temp;
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
 insertion(a,n);
printf("array after sorting:");
for(i=0;i<n;i++)
  printf("%d ",a[i]);
}

