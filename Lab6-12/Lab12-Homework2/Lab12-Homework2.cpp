#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int arr[100], n;

void insert(int num,int loc);
void display();
void Search(int loc);
int main()
{
    int choice,num;
    n=0;
    while(1){
        cout<<"1.Insert\n";
        cout<<"2.Display\n";
        cout<<"3.Search a certain value\n";
        cout<<"4.Quit\n";
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
            	Search(num);
                break;
            case 4 :
                exit(0);
            default:
                cout<<"Wrong choice\n";
        }
    }
}
void insert(int num,int loc)
{
    int par;
    while(loc>0){
        par=(loc-1)/2;
        if(num>=arr[par])
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


void Search(int loc)
{
    int i,x;
    cout<<"Enter a value to search: ";
    cin>>x;
    if(n==0)
	{
        cout<<"Heap is empty on searching\n";
        return;
    }
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]==x)
        {
            cout<<"The value that is at index ["<<i<<"] = "<<x<<endl;
            return;
        }
    }
            cout<<"The given number does not exist"<<endl;
}
