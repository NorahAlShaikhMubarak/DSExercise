#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int  info;
    struct Node *link;
    struct Node *next;
    int value;
};
struct Node *tmp=NULL, *cur=NULL,*head=NULL, *tail=NULL; 


void InsertNodeAtMiddle();
void InsertFront( ) ;
void InsertRear( ) ;
void DeleteFront( ) ;
void DeleteRear( ) ;
void PrintForward( ) ;

int main( )
{
    int choice;
    
    do
    {
        cout<<"\n 1: Insert item at front";
        cout<<"\n 2: Insert item at rear";
        cout<<"\n 3: Delete item from front";
        cout<<"\n 4: Delete item from rear";
        cout<<"\n 5: Print List in forward direction";
        cout<<"\n 6: Insert node in the middle";
        cout<<"\n 7: Exit\n";
        
        cin>>choice;
        switch (choice)
        {
                
            case 1:
                InsertFront( ) ;
                break ;
            case 2:
                InsertRear( ) ;
                break ;
            case 3:
                DeleteFront( ) ;
                break ;
            case 4:
                DeleteRear( ) ;
                break ;
            case 5:
                PrintForward( ) ;
                break ;
            case 6:
                InsertNodeAtMiddle( );
                break;
            case 7:
                cout<<"\n Exiting Program :-(";
                break ;
            default:
                cout<<"\n Error! wrong choice ";
        }
    }while (choice <= 6);
    
    return 0;
}

void InsertFront( )
{
    tmp = (struct Node *)malloc(sizeof(Node));// Create new Employee
    cout<<"\n Enter Integer Data ";
    cin>>tmp->info;
    tmp->link = NULL;
    
    if (head==NULL)
    {
        head=tmp;
        tail=tmp;
    }
    else
    {
        tmp->link=head;
        head=tmp;
    }
}

void InsertRear( )
{
    tmp = (struct Node *)malloc(sizeof(Node));// Create new Employee
    cout<<"\n Enter Integer Data ";
    cin>>tmp->info;
    tmp->link = NULL ;
    
    
    if (head==NULL)
    {
        head=tmp;
        tail=tmp;
    }
    else
    {
        tail->link=tmp;
        tail=tmp;
    }
}
void PrintForward( )
{
    cur = head;
    
    if(cur == NULL)
        cout<<"\n List Empty";
    else
    {
        cout<<"\n List display";
        while(cur!=NULL)
        {
            cout<<"cur->info";
            cur=cur->link ;
        }
    }
}

void DeleteFront( )
{
    struct Node *ptr ;
    ptr = head ;
    if(ptr==NULL)
        cout<<"\n List is empty";
    else
    {
        if(ptr->link==NULL)
        {head = NULL ;tail=NULL ;}
        else
        {
            head = head->link ;
        }
        cout<<"\n Deleted: "<<ptr->info;
        delete(ptr) ; 
    }
}

void InsertNodeAtMiddle()
{
	int value, pos;
	struct Node *newNode, *ptr, *prevnode=NULL;
	newNode = new struct Node;
	cout<<"\nEnter the value: ";
	cin>>value;
	cout<<"Enter position: ";
	cin>>pos;
	newNode -> value = value;
	ptr = head;
	prevnode = NULL;
	for(int i = 0; i < pos; ++i) {
	prevnode = ptr;
	ptr=ptr->next;
	cout<<ptr->next;
	}
	if (prevnode) {
		prevnode->next = newNode; 
		newNode->next = ptr; 
	} else { 
		head = newNode; 
		newNode->next = ptr; 
		cout<<newNode;
	}


    

}

void DeleteRear( ) 
{
    struct Node *ptr = NULL, *cur ;
    cur =  head ;
    if(cur==NULL)
        cout<<"\n List is empty";
    else
    {
        if(cur->link==NULL)
        {head=NULL; tail = NULL ;}
        else
        {
            while(cur->link!=tail)
                cur = cur->link ;
            ptr = tail ;
            cur->link = NULL ; 
            tail = cur ;
        }
        cout<<"\n Deleted: "<<ptr->info;
        delete(ptr) ; 
    }
}
