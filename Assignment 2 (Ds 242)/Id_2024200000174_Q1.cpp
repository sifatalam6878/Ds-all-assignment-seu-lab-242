#include<bits/stdc++.h>
using namespace std;
#define SIZE 100
int st[SIZE];
int top = -1;

void push(int val)
{
    if(top == SIZE - 1)
    {
        cout << "Stack overflow,,Cannot insert element" << endl;
    }
    else
    {
        top++;
        st[top] = val;
        cout << "Element inserted successfully" << endl;
    }
}

void pop()
{
    if(top == -1)
    {
        cout << "stack underflow,, stack is empty" << endl;
    }
    else
    {
        cout << "removed element: " << st[top] << endl;
        top--;
    }
}

void peek()
{
    if(top == -1)
    {
        cout << "Stack is empty,, No top element" << endl;
    }
    else
    {
        cout << "Top element: " << st[top] << endl;
    }
}

void display()
{
    if(top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack elements: ";
        for(int i=top;i>=0;i--)
        {
            cout << st[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int ch,data;
    while(true)
    {
        cout << "\nStack Using Array" << endl;
        cout << "1 Push" << endl;
        cout << "2 Pop" << endl;
        cout << "3 Peek" << endl;
        cout << "4 Display" << endl;
        cout << "5 Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        if(ch==1)
        {
            cout << "Enter value: ";
            cin >> data;
            push(data);
        }
        else if(ch==2)
        {
            pop();
        }
        else if(ch==3)
        {
            peek();
        }
        else if(ch==4)
        {
            display();
        }
        else if(ch==5)
        {
            cout << "Exit successful" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
