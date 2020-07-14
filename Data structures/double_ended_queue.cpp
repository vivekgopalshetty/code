

#include<iostream>
using namespace std;

class DQueue
{
    int front1;
    int end1;
    int capacity;

    public:
        DQueue(int n) { front1 = -1;end1=-1;capacity=n;}
        int arr[100000]={0};
        void enqueuefront(int x);
        int dequeuefront();
        void enqueueback(int x);
        int dequeueback();
        void print_queue();

};

void DQueue::enqueuefront(int x)
{

    if(front1==-1)
    {
        front1=0;
        arr[front1]=x;
        return  ;
    }
    else if(front1==0)
    {
        cout<<"Your element cannot be added to front"<<endl;
        return ;
    }

        arr[front1++]=x;

}

void DQueue::enqueueback(int x)
{

    if(end1==capacity-1)
    {
        cout<<"Your element cannot be added to rear end"<<endl;
        return ;
    }
    else if(front1==-1)
    {
        end1=0;
        arr[end1]=x;

    }
    arr[end1++]=x;

}

int DQueue::dequeuefront()
{
    if(front1>=end1)
    {
        cout<<"your queue is empty"<<endl;
        front1=-1;
        end1=-1;
        return -1;
    }
    else

    {
        int x=arr[front1];
        front1=front1+1;
        return x;
    }
}

int DQueue::dequeueback()
{
    if(front1>=end1)
    {
        cout<<"your queue is empty";
        front1=-1;
        end1=-1;
        return -1;
    }
    else

    {
        int x=arr[end1];
        end1=end1-1;
        return x;
    }
}


void DQueue::print_queue()
{
    for(int i=0;i<capacity;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}



int main()
{

    class DQueue q(10);
    q.enqueuefront(3);
    q.enqueueback(2);
    q.print_queue();
    q.enqueuefront(6);
    q.enqueueback(8);
    q.print_queue();
}
