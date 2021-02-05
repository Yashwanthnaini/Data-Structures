
/*Name:N.Yashwanth 
   ID:B171561*/
   
//structures and stack
#include<stdio.h>
#include<stdlib.h>
//defining stack structure;
struct stack{
	int size;
	int arr[10];
	int top;
};

int main()
{
	printf("option 1->push\noption 2->pop\nelse->exit\n---------------------\n\n");
	struct stack st; //st->stack
	st.size=10;
	st.top=-1;
	int opt;
	while(1)
	{
		printf("Option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			if((st.size-1)==st.top)
			{
				printf("Stack Overflow!\n");
			}
			else
			{
				int val;
				scanf("%d",&val);
				st.arr[st.top+1]=val;
				st.top++;
				printf("%d pushed!\n",val);
			}
		}
		else if(opt==2)
		{
			if(st.top==-1)
			{
				printf("Stack empty!\n");
			}
			else
			{
				printf("%d poped!\n",st.arr[st.top]);
				st.top--;
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
