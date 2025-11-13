#include<iostream>
using namespace std;

class Test
{
    private:
    int size;
    int *queue;
    int front;
    int rare;
    public:
    Test(int size)
    {
        this->size=size;
        queue=new int[size];
        rare=front=-1;
    }
    void enqueue(int value)
    {
        if(rare==size-1)
        {
            cout<<"The Array is Full";
            return;
        }
        else if(front==-1&&rare==-1)
        {
            front=rare=0;
            queue[rare]=value;
        }
        else
        {
            queue[++rare]=value;
        }
    }
    void dequeue()
    {
        if(front==-1&& rare==-1)
        {
            cout<<"the Queue Is Empty";

        }
        else if(front==rare)
        {
            front=rare=-1;
            return;
        }
        else
        {
            front++;
            return;
        }
    }
    void peek()
    {
        if(front==-1&&rare==-1)
        {
            cout<<"the Queue is Empty";
        }
        else
        {
            cout<<queue[front]<<" ";
        }
    }
    void Last()
    {
        if(front==-1&&rare==-1)
        {
            cout<<"the Queue Is empty";
        }
        else
        {
            cout<<queue[rare]<<" ";
        }
    }
    void display()
    {
        if(rare==-1&&front==-1)
        {
            cout<<"the Queue Is Empty";
        }
        else 
        {
            for(int i=front;i<=rare;i++)
            {
                cout<<queue[i]<<" ";
            }
        }
    }
};



int main()
{
    Test ob1(10);
    ob1.enqueue(10);
    ob1.enqueue(11);
    ob1.enqueue(11);
    ob1.enqueue(11);// add elements to the stack

    ob1.display(); //displays the queue
    cout<<"\n--------------------------------------\n";
    ob1.dequeue();// deletes the front element
    ob1.display();
    
    cout<<"\n--------------------------------------\n";
    ob1.peek();// prints the peek
    cout<<"\n--------------------------------------\n";
    ob1.Last();
}