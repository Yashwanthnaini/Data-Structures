
/*Name:N.Yashwanth 
   ID:B171561*/
   
//stack building using funtions.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int push(int arr[],int,int);
int pop(int arr[],int);

int main()
{
	int size;
	printf("Enter the size of stack: ");
	scanf("%d",&size);
	int arr[size];
	int top=-1;
	int opt;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			top=push(arr,top,size);
		}
		else if(opt==2)
		{
			top=pop(arr,top);;
		}
		else
		{
			printf("Exit\n");
			break;
		}
	}
	
}
int push(int arr[],int top,int size)
{
	if(top!=size-1)
	{
		int val;
		printf("Enter value: ");
		scanf("%d",&val);
		arr[top+1]=val;
		top++;
		printf("Pushed!\n");
	}
	else
	{
		printf("Stack overflow!\n");
	}
	return top;
}
int pop(int arr[],int top)
{
	if(top!=-1)
	{
		printf("%d",arr[top]);
		top--;
		printf(" Poped!\n");
	}
	else
	{
		printf("Empty stack\n");
	}
	return top;
}
