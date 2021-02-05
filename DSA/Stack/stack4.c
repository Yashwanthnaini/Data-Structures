
/*Name:N.Yashwanth 
   ID:B171561*/
   
//stack using structures and arrays;

#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int* arr;
	int top;
};

void push(struct stack* st)
{
	if(st->top==st->size-1)
	{
		printf("Stack Overflow!\n");
	}
	else
	{
		int val;
		printf("Value: ");
		scanf("%d",&val);
		st->arr[st->top+1]=val;
		st->top++;
		printf("%d Pushed!\n",val);
	}
}

void pop(struct stack* st)
{
	if(st->top==-1)
	{
		printf("Stack is empty!\n");
	}
	else
	{
		printf("%d poped!\n",st->arr[st->top]);
		st->top--;
	}
}


int main()
{
	printf("option 1->push\noption 2->pop\nelse->exit\n---------------------\n\n");
	struct stack* st=(struct stack*)malloc(sizeof(struct stack));
	printf("Enter Stack size: ");
	scanf("%d",&st->size);
	st->arr=(int*)malloc(sizeof(int)*st->size);
	st->top=-1;
	int opt;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			push(st);
		}
		else if(opt==2)
		{
			pop(st);
		}
		else
		{
			printf("Exit\n");
			break;
		}
	}
	return 0;
}
