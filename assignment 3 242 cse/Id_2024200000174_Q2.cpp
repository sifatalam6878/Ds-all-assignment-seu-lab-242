#include<bits/stdc++.h>
using namespace std;
//structure
struct node
{   int data;
    node* next;
};

node* nodeCre(int val)
{
    node* n1 = new node();
    n1-> data = val;
    n1->next=NULL;
    return n1;
}


void display(node* head)
{
    node* cur = head;
    while(cur!=NULL)
    {

        cout<<cur->data<<" -> ";
        cur = cur->next;
    }
    cout<<"NULL"<<endl;
}

//Linked List Reverse:
void listrev(node *&head)
{

    node * curr = head ;
    node * prev = nullptr;
    node * nextNode ;

    while(curr!=NULL)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

// Linked List middle element:
void midNodefin(node*& head)
{
    if(head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    node *sss = head;
    node *fff = head;

    while(fff != NULL && fff->next != NULL)
    {
        sss = sss->next;
        fff = fff->next->next;
    }

    cout << "middle Element:" << sss->data << endl;
}

int main()
{   //List Creation:
    node * head = nodeCre(5);
    head -> next = nodeCre(7);
    head -> next -> next = nodeCre(9);

    cout<<"Initial Linked list:\n";
    display(head);
    cout<<"After reverse: "<<endl;
    listrev(head);
    display(head);
    midNodefin(head);
}
