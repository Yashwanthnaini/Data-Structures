
/*Name:N.Yashwanth 
   ID:B171561*/
   
//queue building using structures and arrays ;
//Dynamic memory allocation of structure and array with given size and functions

#include<stdio.h>
#include<stdlib.h>

struct queue{
	int size;
	int* arr;
	int front;
	int rear;
};

void Enqueue(struct queue* st)
{
	if(st->rear==st->size-1)
	{
		printf("Queue Overflow!\n");
	}
	else
	{
	    if(st->front==-1)
        {
            st->front=0;
        }
		int val;
		printf("Value: ");
		scanf("%d",&val);
		st->arr[st->rear+1]=val;
		(st->rear)++;
		printf("%d enqueued!\n",val);
	}
}

void Dequeue(struct queue* st)
{
	if(st->front==-1 || st->front>st->rear)
    {
        printf("Empty Queue\n");
    }
    else{
        printf("%d Dequeued!\n",st->arr[st->front]);
        st->front++;
    }
}


int main()
{
	printf("option 1->Enqueue\noption 2->Dequeue\nelse->exit\n---------------------\n\n");
	struct queue* st=(struct queue*)malloc(sizeof(struct queue));
	printf("Enter Stack size: ");
	scanf("%d",&st->size);
	st->arr=(int*)malloc(sizeof(int)*st->size);
	st->front=-1;
	st->rear=-1;
	int opt;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			Enqueue(st);
		}
		else if(opt==2)
		{
			Dequeue(st);
		}
		else
		{
			printf("Exit\n");
			break;
		}
	}
	return 0;
}
