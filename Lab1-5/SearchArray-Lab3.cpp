#include <iostream>
using namespace std;
int main ()
{
	int array[10];
	int *ptr;
	int x;
	int i=0;
	
	for(i=0;i<10;i++){
		cout<<"Type an integer value: ";
		cin>>*(array+i);
	}
	ptr=array;
	cout<<"Type the value of x: ";
	cin>>x;
	for(i=0;i<10;i++){
		if(*(array+i)==x){
			cout<<"X match the number in the array"<<endl;
			return 0;
		}
		
	}
	cout<<"X doesn't match any number in the array"<<endl;
}
