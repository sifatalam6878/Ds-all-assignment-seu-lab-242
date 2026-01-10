#include<bits/stdc++.h>
using namespace std;
#define SIZE 10

int ss[SIZE];
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if((rear+1)%SIZE==front)
    {
        cout << "queue Overflow,, queue is full" << endl;
    }
    else
    {
        if(front==-1)
            front = 0;
        rear = (rear+1) % SIZE;
        ss[rear] = val;
        cout << "Inserted: " << val << endl;
    }
}

void dequeue()
{
    if(front==-1)
    {
        cout << "Queue Underflow! Queue is empty" << endl;
    }
    else
    {
        cout << "deleted: " << ss[front] << endl;

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front+1) % SIZE;
        }
    }
}

void display()
{
    if(front==-1)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "circular queue elements: ";
        int i=front;
        while(true)
        {
            cout << ss[i] << " ";
            if(i==rear)
                break;
            i=(i+1)%SIZE;
        }
        cout << endl;
    }
}

int main()
{
    int ch,data;
    while(true)
    {
        cout << "\n  Circular Queue" << endl;
        cout << "1 Enqueue" << endl;
        cout << "2 Dequeue" << endl;
        cout << "3 Display" << endl;
        cout << "4 Exit" << endl;
        cout << "Enter your choise: ";
        cin >> ch;

        if(ch==1)
        {
            cout << "Enter value: ";
            cin >> data;
            enqueue(data);
        }
        else if(ch==2)
        {
            dequeue();
        }
        else if(ch==3)
        {
            display();
        }
        else if(ch==4)
        {
            cout << "Program end successfully" << endl;
              break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}
