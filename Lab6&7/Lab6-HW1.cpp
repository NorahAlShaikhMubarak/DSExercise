#include <iostream>
using namespace std;
#define MAX 5

typedef struct{
	int Q[MAX];
	int front;
	int back;
}Queue;

Queue q;
int main ()
{
	int ch;
	q.back=-1;
	q.front=-1;
	do{
		cout<<"1)Insert\n 2)Delete\n 3)Display\n 4)Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:
				int item;
             	q.back = -1; q.front = -1;
              	if (q.back==MAX-1)         
	         	 cout<<"Queue Overflow, Cannot insert more elements\n" ;
            else
            {
	          	cout<<"Enter the item to be insert in queue : ";
	        	cin>>item ;
	        	q.back++;
	        	q.Q[q.back] = item;
	        	if (q.front==-1)
	    		q.front=0;
         	}
         	break;
         	case 2:
         		if (q.front==-1)
	        	cout<<"Queue underflow/empty\n" ;
         	else
        	{
         		cout<<"Deleted value: "<<q.Q[q.front] ;
     		if (q.front==q.back)
     		{
	    		q.front = -1;
	     		q.back = -1;
	    	}
	    	else
			 q.front++;
        	}
        	break;
        	case 3:
        		int i;
            if (q.front == -1)
           	 cout<<"Queue is empty\n" ;
             else
           {
         	 cout<< "Queue is :\n" ;
	         for(i=q.front;i<= q.back;i++)
         	 cout<<q.Q[i] ;
         	 cout<<"\n" ;
           }
           default:
           cout<<"Exit the program";
 
		}
	
	}
	while(ch!=4);
}


