
/*Name:N.Yashwanth 
   ID:B171561*/
   
//Queue building with array and function

#include<stdio.h>
#include<stdlib.h>

void Enqueue(int* queue,int* front,int* rear,int size)
{
    if(*rear==size-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if(*front==-1)
        {
            *front=0;
        }
        int val;
        scanf("%d",&val);
        (*rear)++;
        queue[*rear]=val;
    }
}
void Dequeue(int* queue,int* front,int* rear)
{
    if(*front==-1|| *front>*rear)
    {
        printf("Empty Queue\n");
    }
    else
    {
        printf("%d Dequeued\n",queue[*front]);
        (*front)++;
    }
}

int main()
{
    int size;
	printf("Enter the size of queue: ");
	scanf("%d",&size);
	int* queue=(int*)malloc(sizeof(int)*size);
	int rear=-1,front=-1;
	int opt;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			Enqueue(queue,&front,&rear,size);
		}
		else if(opt==2)
		{
			Dequeue(queue,&front,&rear);
		}
		else
		{
			printf("Exit\n");
			break;
		}
	}
    return 0;
}
