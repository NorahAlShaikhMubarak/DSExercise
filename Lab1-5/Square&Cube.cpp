#include <iostream>
using namespace std;
void SquareCube(int x, int *square, int *cube);
int main ()
{
	int x;
	int square,cube;
	cout<<"Enter any integer: "<<endl;
	cin>>x;
	SquareCube(x, &square, &cube);
	cout<<"The square of the number is qual to= "<<square<<endl;
	cout<<"The cube of the number is equal to= "<<cube<<endl;
	
	return 0;
}
void SquareCube(int x, int *square, int *cube)
{
	*square=x*x;
	*cube=x*x*x;
}
