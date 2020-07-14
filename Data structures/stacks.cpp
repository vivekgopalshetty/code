#include<iostream>
using namespace std;

class Stack
{
    int top;
    int n;

    public:
        Stack(int cap) { top = -1; n=cap;}
        int arr[100000];
        void push(int x);
        int pop();
        void print_stack();

};

void Stack::push(int x)
{

    if(top==n)
    {
        cout<<"Your stack is full\n";
    }
    else
    {
        arr[++top]=x;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"your stack is empty\n";
    }
    else

    {
        int x=arr[top];
        top=top-1;
        return x;
    }
}


void Stack::print_stack()
{
    for(int i=0;i<=top;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}



int main()
{

    class Stack s(10);
    s.pop();
    s.push(3);
    s.push(2);
    s.print_stack();
    s.pop();
    s.print_stack();
    s.push(10);
    s.push(2781);
    s.print_stack();
    s.push(10);
    s.print_stack();

}
