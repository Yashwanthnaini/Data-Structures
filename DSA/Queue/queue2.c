
/*Name:N.Yashwanth 
   ID:B171561*/
   
//structures and Queues

#include<stdio.h>
#include<stdlib.h>
//defining Queue structure;
struct queue{
	int size;
	int arr[10];
	int front;
	int rear;
};
int main()
{
	printf("option 1->Enqueue\noption 2->Dequeue\nelse->exit\n---------------------\n\n");
	struct queue st; //st->stack
	st.size=10;
	st.front=-1;
	st.rear=-1;
	int opt;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			if(st.rear==st.size-1)
			{
				printf("Queue Overflow!\n");
			}
			else
			{
				if(st.front==-1)
				{
					st.front=0;
				}
				int val;
				scanf("%d",&val);
				st.arr[st.rear+1]=val;
				st.rear++;
				printf("%d Enqueued!\n",val);
			}
		}
		else if(opt==2)
		{
			if(st.front==-1||st.front>st.rear)
			{
				printf("Empty empty!\n");
			}
			else
			{
				printf("%d dequeued!\n",st.arr[st.front]);
				st.front++;
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
