
/*Name:N.Yashwanth 
   ID:B171561*/

//queue using dynamic memory allocation and array

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int* queue;
    int n;
    printf("Enter the size of queue: ");
    scanf("%d",&n);
    queue=(int*)malloc(sizeof(int)*n);
    int rear=-1,front=-1;
    printf("Enter 1 to enqueue\n");
    printf("Enter 2 to Dequeue\n");
    printf("Else exit\n");
    printf("-----------------------\n");
    while(1)
    {
        int opt;
        printf("Enter Option: ");
        scanf("%d",&opt);
        if(opt==1)
        {
            if(rear==n-1)
            {
                printf("Queue Overflow");
            }
            else{
                if(front==-1)
                {
                    front=0;
                }
                int val;
                scanf("%d",&val);
                rear++;
                *(queue+rear)=val;
                printf("%d Enqueued\n",val);
            }
        }
        else if(opt==2)
        {
            if(front>rear || front==-1)
            {
                printf("Empty Queue\n");
            }
            else{
                printf("%d Dequeued\n",*(queue+front));
                front++;\
            }
        }
        else{
            break;
        }
    }
}
