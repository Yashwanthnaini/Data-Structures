
/*Name:N.Yashwanth 
   ID:B171561*/
   
//building stack using arrays.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	printf("Enter the size of stack: ");
	scanf("%d",&size);
	int arr[size];
	int opt;
	int top=-1;
	int val;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			if(top!=size-1)
			{
				scanf("%d",&val);
				arr[top+1]=val;
				top++;
				printf("Pushed!\n");
			}
			else
			{
				printf("Stack overflow\n");
			}
		}
		else if(opt==2)
		{
			if(top==-1)
			{
				printf("Stack is empty\n");
			}
			else
			{
				printf("%d ",arr[top]);
				top--;
				printf("Poped!\n");
			}
		}
		else
		{
			printf("Exit\n");
			break;
		}
	}
	return 0;
}
