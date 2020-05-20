#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define MAX 10

typedef struct {
char customer_name[20];
char food_type[20];
int food_quantity;
int price;
} order;
order Order[MAX];
int front;
int back;
void Insert(){
	char cname[20] ;
    char ftype[20] ;
    int fq ;
    int p ;
	if(back==(MAX-1))
    cout<<"\nQueue is overflowe"<<endl;
	else{
		fflush(stdin);
	cout<<"\nEnter another person to insert in the queue: \nCustomer name:";
	cin>>cname;
		fflush(stdin);
		cout<<"\nEnter Food type:";
		cin>>ftype;
			cout<<"\nEnter Food quantity:";
		cin>>fq;
        cout<<"\n your price is= "<<p;
		cout<<"\n";
		back++;
		strcpy(Order[back].customer_name,cname);
		strcpy(Order[back].food_type,ftype);
        Order[back].food_quantity=fq;
		Order[back].price=p;
		if (front==-1)
		front=0;
	}
}
    void Delete(){
    if(front==-1)
    cout<<"\nQueue is Underflow\n";
    else{
    cout<<"\nDeleted item is: "<<Order[front].customer_name<<Order[front].food_type<<Order[front].food_quantity<<Order[front].price ;

    if(back==front){
	back=-1;
	front=-1;}
	else 
	front++;	
   }	
   }
    void Display(){
	int i;
	if(front==-1)
    cout<<"Queue is Underflow\n";
	else
	{
	cout<<"Queue:";
	for (i=front;i<=back;i++){
	cout<<"\n Customer name:"<<Order[i].customer_name<<" \nFood type:"<<Order[i].food_type<<" \n Quantity:"<<Order[i].food_quantity<<" \nPiece/Pieces\n "<<Order[i].price;

   }
	cout<<"\n";	
   } 
   }
    int main()
	{
	int ch;
	front=-1;
    back=-1;
	while(1){
	cout<<"Menu:\n 1)Insert\n 2)Delete\n 3)Display\n 4)Exit"<<endl;
	fflush(stdin);
	cout<<"\nEnter your choice: ";
    cin>>ch;
	switch(ch){
	case 1:
	Insert(); break;
	case 2:
	Delete();break;
	case 3:
	Display(); break;
	case 4:
	exit(0);
	default:
	cout<<"Exit the program"<<endl;	
	}
	
	}
	
    return 0;
}
