#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node {
    int Data;
    struct Node* Left;
    struct Node* Right;
};
void InsertIter(Node *root, Node *p);
void Inorder(struct Node *r);
void Preorder(struct Node *r);
void Postorder(struct Node *r);
struct Node* CreateNode(int i);

int main ()
{
    int choice;
    int item;
    struct Node *root = NULL;
    struct Node *p;
    
    do
    {
        cout<<"\n1)Insert a node \n2)Display tree using In-order method \n3Display tree using Pre-order \n4)Display tree using Post-order \n5)Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter an item: ";
                cin>>item;
                p = CreateNode(item);
                if (root == NULL)
                    root = p;
                else
                    InsertIter(root, p);
                break;
            case 2:
                Inorder(root);
                break;
            case 3:
                Preorder(root);
                break;
            case 4:
                Postorder(root);
                break;
            case 5:
                cout<<"\nExiting the program..";
                break;
            default:
                cout<<"\nIncorrect choice";
       }
    }while(choice<=4);
    
    return 0;
}
void InsertIter(Node *root, Node *p)
{
    Node*  father = root, *child = root;
    while(child!=NULL)
    {
        father = child;
        if(p->Data < father->Data)
            child = father->Left;
        else
            child = father->Right;
    } 
    if(p->Data < father->Data)
        father->Left = p;
    else
        father->Right = p;
} 

struct Node* CreateNode(int i)
{
    Node *p;
    p = (struct Node *) malloc(sizeof(Node));
    p->Data = i;
    p->Left = NULL;
    p->Right = NULL;
    return p;
}
void Inorder(Node *r)
{
    if (r == NULL)
        return;
    
    Inorder(r->Left);
    cout<<r->Data;
    Inorder(r->Right);
}
void Preorder(Node *r)
{
    if (r == NULL)
        return;
    
    cout<<r->Data;
    Preorder(r->Left);
    Preorder(r->Right);
}
void Postorder(Node *r)
{
    if (r == NULL)
        return;
    
    Postorder(r->Left);
    Postorder(r->Right);
    cout<<r->Data;
}
