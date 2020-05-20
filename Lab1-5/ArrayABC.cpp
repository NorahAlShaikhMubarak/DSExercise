#include <iostream>
 using namespace std; 
 int main() 
 {
 	int a[5],b[5],c[10];
 	cout<<"Enter the elements of Array A: ";
 	for(int i=0;i<5;i++)
 	cin>>a[i];
 	cout<<"  ";
 	
	cout<<"Enter the elements of Array B: ";
 	for(int i=0;i<5;i++)
 	cin>>b[i];
 	
 	cout<<"The elements of Array C: ";
 	for(int i=0;i<5;i++)
 	{
 		cout<<"  "<<a[i]<<"  ";
 		cout<<b[i];
	 }
 	
 	return 0;
 	
 }
