#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Employee{
    char name[10];
    int  id;
    struct Employee *next, *prev ;
};
struct Employee *emp, *cur,*head,*tail;

void InsertFront();
void DisplayList();
void DeleteFront();

int main( )
{
    int choice;
    emp=NULL;
    cur=NULL;
    head=NULL;
    tail=NULL;
    
    do
    {
        
        cout<<"1)Insert in Front \n2)Display the list \n3)Delete from the list \n4)Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        switch (choice)
        {
            case 1:
                 InsertFront();
                break;
           
            case 2:
                DisplayList();
                break;
                
            case 3:
                DeleteFront();
                break;
                
            case 4:
                cout<<"\nExit the program";
                break;
                
            default:
                cout<<"\nIncorect choice";
                
        }
        
        }while(choice<=3);
    
    return 0;
}

void InsertFront( )
{
    emp = (struct Employee*)malloc(sizeof(Employee));// Create new Employee
    cout<<"\n Enter Employee Name: " ;
    cin>>emp->name ;
    cout<<"\n Enter Employee ID : " ;
    cin>>emp->id ;
    if (head==NULL)
    {
        emp->next = NULL ;
        emp->prev = NULL ;
        head=emp;
        tail=emp;
    }
    else
    {
        emp->next=head;
        emp->prev=NULL;
        head->prev = emp;
        head=emp;
    }
}

void DisplayList( )
{
    cur = head;
    cout<<"\n List display" ;
    if(cur == NULL)
        cout<<"\n List Empty" ;
    else
        while(cur!=NULL)
        {
            cout<<"\n ID: "<<cur->id<<endl;
            cout<<"\n Name: "<<cur->name<<endl;
            cur=cur->next ;
        }
}

void DeleteFront( )
{
    cur = head;
    if(cur == NULL)
        cout<<"\n List empty\n";
    else if(cur->next== NULL)
    {
        cout<<" \n Element deleted: "<<cur->id<<"\t"<<cur->name<<"\n";
        head = NULL; tail = NULL;
        delete(cur);

    }
    else
    {
        cout<<" \n Element deleted is: "<<cur->id<<endl;
        cout<<"\n Name: "<<cur->name;
        head = cur->next;
        head->prev=NULL;
        free(cur);
        
    }
}
