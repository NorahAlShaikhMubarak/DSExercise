#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head, *tail;

struct Node* CreateNode(int i);
void InsertFront();
void InsertRear();
void DeleteFront();
void DeleteRear();
void Display();

int main ()
{
    int choice;
    int item;
    struct Node *loc;
    struct Node *head = NULL;
    struct Node *tail = NULL;
    
    do
    {
        cout<<"\n1)Insert a node at front \n2)Insert a node at the end \n3Delete node from front \n4)Delete node from rear \n5)Display list";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter an item: ";
                cin>>item;
                loc = CreateNode(item);
                if (head == tail && head == NULL)
                {
                    cout<<"Element inserted in empty list"<<endl;
                    head = tail =loc;
                    head->next = tail->next = NULL;
                    head->prev = tail->prev = NULL;
                }
                else
                    InsertFront();
                break;
                
            case 2:
                
                cout<<endl<<"Enter an item: ";
                cin>>item;
                loc = CreateNode(item);
                if (head == tail && head == NULL)
                {
                    cout<<"Element inserted in empty list"<<endl;
                    head = tail = loc;
                    head->next = tail->next = NULL;
                    head->prev = tail->prev = NULL;
                }
                else
                    InsertRear();
                break;
                
            case 3:
                DeleteFront();
                break;
            case 4:
                DeleteRear();
                break;
            case 5:
                Display();
                break;
            case 6:
                cout<<"\nExiting the program..";
                break;
            default:
                cout<<"\nIncorrect choice";
        }
    }while(choice<=5);
    
    return 0;
}
struct Node* CreateNode(int i)
{
    Node *loc;
    loc = (struct Node*)malloc(sizeof(Node));
    loc->data = i;
    loc->next = NULL;
    loc->prev = NULL;
    return loc;
    
}
void InsertFront()
{
    Node *loc;
    loc->next = head;
    loc->prev = tail;
    head->prev = loc;
    tail->next = loc;
    head = loc;
    cout<<"Element inserted"<<endl;
}

void InsertRear()
{
    Node *loc;
    tail->next = loc;
    loc->next = head;
    loc->prev = tail;
    tail = loc;
    head->prev = tail;
    cout<<"Element inserted"<<endl;
    
}
void DeleteFront()
{
    Node *temp;
    if(head==NULL)
        return;
    
    temp = head;
    
    tail->next = head->next;
    head = head->next;
    head->prev = tail;
    cout<<"Deleted element: "<<temp->data;
    delete(temp);
    
}
void DeleteRear()
{
    if(head==NULL)
        return;
    
    Node *temp = head;
    Node *current = head;
    
    while(current->next != head)
    {
        temp = current;
        current = current->next;
    }
    temp->next = head;
    tail = temp;
    head->prev = tail;
    cout<<"Deleted element: "<<current->data;
    delete(current);
}
void Display()

{
    if (head == tail && head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    else
    {
        Node *temp = head;
        cout<<temp->data<<" ";
        temp = temp->next;
        
        cout<<temp->data<<endl;
    }
    
}

//Group names:
//1)Norah Hamad Alshaikhmubarak
//2)Heba Adnan Alabdulmuhsin
//3)Marwah Taher Alabdulmuhsin
