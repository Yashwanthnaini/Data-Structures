
/*Name:N.Yashwanth 
   ID:B171561*/
   
//stack using array and pointers
#include<stdio.h>
#include<stdlib.h>
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
			if(top!=size-1)
			{
				int val;
				scanf("%d",&val);
				top++;
				*(stack+top)=val;
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
				printf("%d ",*(stack+top));
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
