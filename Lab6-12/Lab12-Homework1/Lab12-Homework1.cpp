#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int arr[100], n;

void insert(int num,int loc);
void display();
void largestNode();
void countNodes(int loc);
int main()
{
    int choice,num;
    n=0;
        while(1){
        cout<<"1.Insert\n";
        cout<<"2.Display\n";
        cout<<"3.Display largest node\n";
        cout<<"4.Count the number of nodes\n";
        cout<<"5.Quit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the number to be inserted : ";
                cin>>num;
                insert(num,n);
                n=n+1;
                break;
            case 2:
                display();
                break;
            case 3:
                largestNode();
                break;
            case 4:
                countNodes(num);
				break;	
            case 5:
                exit(0);
            default:
                cout<<"Wrong choice\n";
        }
    }
}
void insert(int num,int loc){
    int par;
    while(loc>0){
        par=(loc-1)/2;
        if(num<=arr[par])
        {
            arr[loc]=num;
            return;
        }
        arr[loc]=arr[par];
        loc=par;
    }
    arr[0]=num;
}


void display()
{
    int i;
    if(n==0){
        cout<<"Heap is empty\n";
        return;
    }
    for(i=0;i<n;i++)
        cout<<arr[i];
    cout<<"\n";
}

void largestNode()
{
	cout<<"The largest node in max heap is: "<<arr[0]<<endl;
}

void countNodes (int loc)
{
    int i;
    int count=0;
    if(n==0)
    {
        cout<<"Heap is empty\n";
        return;
    }
    for(i=0;i<=n-1;i++)
    {
        if(arr[loc]>=0)
            count++;
    }
    cout<<"Number of nodes in max heap is: "<<count<<endl;
        
}
