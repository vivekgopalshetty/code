
#include<iostream>
using namespace std;

class Queue
{
    int start;
    int rear;
    int n;

    public:
        Queue(int cap) { start = -1;rear=-1;n=cap;}
        int arr[100000];
        void enqueue(int x);
        int dequeue();
        void print_queue();

};

void Queue::enqueue(int x)
{
    if(start==-1 && rear==-1)
    {
        rear=1;
        arr[++start]=x;
    }
    else if(rear==n)
    {
        cout<<"Your queue is full\n";
    }
    else
    {
        arr[rear++]=x;
    }
}

int Queue::dequeue()
{
    if(start>=rear)
    {
        cout<<"your queue is empty\n";
    }
    else

    {
        int x=arr[start];
        start=start+1;
        return x;
    }
}


void Queue::print_queue()
{
    for(int i=start;i<rear;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}



int main()
{

    class Queue q(3);
    q.dequeue();
    q.enqueue(3);
    q.enqueue(2);
    q.print_queue();
    q.enqueue(6);
    q.enqueue(8);
    q.print_queue();
    int x=q.dequeue();
    x=q.dequeue();
    q.print_queue();
//    q.enqueue(3);
//    q.enqueue(2);
//    q.enqueue(3);
//    q.enqueue(2);
//    q.print_queue();
//q.pop();
  //  s.print_stack();

}
