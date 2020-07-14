

#include<iostream>
using namespace std;

class Queue
{
    int start;
    int rear;
    int MAX;

    public:
        Queue(int cap) { start = -1;rear=-1;MAX=cap;}
        int arr[100000];
        void enqueue(int x);
        void dequeue();
        void print_queue();

};

void enqueue(int item)
{
	if((start == 0 && rear == MAX-1) || (start == rear+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	if (start == -1)  /*If queue is empty */
	{
		start = 0;
		rear = 0;
	}
	else
	{
		if(rear == MAX-1)	/*rear is at last position of queue */
			rear = 0;
		else
			rear = rear+1;
	}
	queue[rear] = item ;
}


void dequeue()
{
	if (start == -1)
	{
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element deleted from queue is : %d\n",queue[start]);
	if(start == rear) /* queue has only one element */
	{
		start = -1;
		rear=-1;
	}
	else
	{
		if(start == MAX-1)
			start = 0;
		else
			start = start+1;
	}
}

void print_queue()
{
	int start_pos = start,rear_pos = rear;
	if(start == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n");
	if( start_pos <= rear_pos )
		while(start_pos <= rear_pos)
		{
			printf("%d ",queue[start_pos]);
			start_pos++;
		}
	else
	{
		while(start_pos <= MAX-1)
		{
			printf("%d ",queue[start_pos]);
			start_pos++;
		}
		start_pos = 0;
		while(start_pos <= rear_pos)
		{
			printf("%d ",queue[start_pos]);
			start_pos++;
		}
	}
	printf("\n");



int main()
{

    class Queue q(2);
    q.enqueue(3);
    q.enqueue(2);
    q.print_queue();
    q.enqueue(6);
    q.enqueue(8);
    q.print_queue();
//    int x=q.dequeue();
//    x=q.dequeue();
//    q.print_queue();
//    q.enqueue(3,10);
//    q.enqueue(2,10);
//    q.enqueue(3,10);
//    q.enqueue(2,10);
//    q.print_queue();
//    q.enqueue(3,10);
//    q.enqueue(2,10);
//    q.print_queue();
//    q.enqueue(3,10);
//    q.enqueue(2,10);
//    q.print_queue();
//q.pop();
  //  s.print_stack();

}
