
/*Name:N.Yashwanth 
   ID:B171561*/
   
//stack building using functions and malloc and arrays.
#include<stdio.h>
#include<stdlib.h>
void push(int* stack,int* top,int size)
{
	if(*top!=size-1)
	{
		int val;
		printf("Enter value: ");
		scanf("%d",&val);
		stack[*top+1]=val;
		(*top)++;
		printf("Pushed!\n");
	}
	else
	{
		printf("Stack overflow!\n");
	}
}
void pop(int* stack,int* top)
{
	if(*top!=-1)
	{
		printf("%d",stack[*top]);
		(*top)--;
		printf(" Poped!\n");
	}
	else
	{
		printf("Empty stack\n");
	}
}
int main()
{
	int size;
	printf("Enter the size of stack: ");
	scanf("%d",&size);
	int* stack=(int*)malloc(sizeof(int)*size);
	int top=-1;
	int opt;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			push(stack,&top,size);
		}
		else if(opt==2)
		{
			pop(stack,&top);;
		}
		else
		{
			printf("Exit\n");
			break;
		}
	}
	return 0;
}
