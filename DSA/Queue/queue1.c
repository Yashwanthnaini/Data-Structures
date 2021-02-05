
/*Name:N.Yashwanth 
   ID:B171561*/
   
//building queues using arrays
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter the size of queue:");
	scanf("%d",&n);
	int arr[n];
	printf("\n");
	printf("Enter 1 to Enqueue\n");
	printf("Enter 2 to dequeue\n");
	printf("Else exit\n");
	printf("*************************\n");
	int rear=-1,front=-1;
	while(1)
	{
		int opt;
		printf("Enter option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			if(rear==n-1)
			{
				printf("Queue Overflow\n");
			}
			else
			{
				if(front==-1)
				{
					front=0;
				}
				int ele;
				printf("Enter element: ");
				scanf("%d",&ele);
				arr[rear+1]=ele;
				rear++;
				printf("%d Enqueued!\n",ele);
				
			}
		}
		else if(opt==2)
		{
			if(front==-1 || front>rear)
			{
				printf("Empty Queue\n");
			}
			else
			{
				printf("%d dequeued\n",arr[front]);
				front++;
			}
		}
		else
		{
			break;
		}
	}
	
} 
