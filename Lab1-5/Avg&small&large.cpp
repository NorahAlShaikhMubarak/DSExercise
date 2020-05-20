#include <iostream>
using namespace std;
void average(int mark, int *avg);
void largest(int mark, int*large);
void smallest(int mark, int *small);
int main ()
{
	int mark;
	int avg;
	int small=0;
	int large=0;
	int student;
	cout<<"Entet the marks for 3 students: "<<endl;
	for(student=0;student<=3;student++)
	{
		cin>>mark;
	}
	average(mark, &avg);
	largest(mark, &large);
	smallest(mark, &small);
	cout<<"The average is: "<<avg<<endl;
	cout<<"The largest value is: "<<large<<endl;
	cout<<"The smallest value is: "<<small<<endl;
	
	return 0;
}
void average(int mark, int *avg)
{
	int total=0;
	for(int student=0;student<=3;student++){
		total+=mark;
	}
	*avg=total/3;
	
}
void largest(int mark, int*large)
{
	for(int student=0;student<=3;student++){
		if(mark>large)
		mark=large;
	}
}

	void smallest(int mark, int *small)
	{
		for(int student=0;student<=3;student++){
			if(mark<small)
			mark=*small;
		}
	}
