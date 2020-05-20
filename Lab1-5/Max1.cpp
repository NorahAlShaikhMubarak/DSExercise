#include <iostream>
using namespace std;
int main()
{
	int small,big;
	int i;
	int array[10];
	int *ptr;
	ptr=array;
	cout<<"Enter the numbers: "<<endl;
	for(i=0;i<10;i++){
		cin>&array[i];
	}
	
	big=small=array[0];
	for(i=0;i<10;i++)
	{
		if(*(array+i)>big){
		big=array[i];	
		}
		else if(*(array+i)<small){
		small=array[i];	
		}	
	
}

	cout<<"The largest number is: "<<big<<endl;
	cout<<"The smallest number is: "<<small<<endl;
	
	return 0;
}
