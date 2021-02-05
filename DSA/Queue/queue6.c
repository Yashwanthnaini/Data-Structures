
/*Name:N.Yashwanth 
   ID:B171561*/
   
//Queue building using structure and functions

#include<stdio.h>
#include<stdlib.h>

struct queue{
    int arr[10];
    int front;
    int rear;
    int size;
};

struct queue Enqueue(struct queue q)
{
    if(q.rear==q.size-1)
    {
        printf("Queue overflow!\n");
    }
    else{
        if(q.front==-1)
        {
            q.front=0;
        }
        int val;
        printf("Enter val: ");
        scanf("%d",&val);
        q.rear++;
        q.arr[q.rear]=val;
        printf("%d Enqueued!\n",val);
    }
    return q;
}

struct queue Dequeue(struct queue q)
{
    if(q.front==-1||q.front>q.rear)
    {
        printf("Empty queue\n");
    }
    else
    {
        printf("%d Dequeued!\n",q.arr[q.front]);
        q.front++;
    }
    return q;
}

int main()
{
    printf("option 1->Enqueue\noption 2->Dequeue\nelse->exit\n---------------------\n\n");
    struct queue q;
    q.size=10;
    q.front=-1;
    q.rear=-1;
    while(1)
    {
        int opt;
        printf("Enter option: ");
        scanf("%d",&opt);
        if(opt==1)
        {
            q=Enqueue(q);
        }
        else if(opt==2)
        {
            q=Dequeue(q);
        }
        else
        {
            printf("Exit\n");
            break;
        }
    }
    return 0;
}
