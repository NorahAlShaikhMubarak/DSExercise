#include <iostream>
using namespace std;
void fact(int a,int b,int *c);
int main ()
{
	int x,c1,c2;
	cout<<"Enter your number: "<<endl;
	cin>>x;
	fact(x,c1,&c2);
	cout<<"\nThe largest factor is: "<<c2<<endl;;
	return 0;
}
void fact(int a,int b,int *c)
{
	cout<<"The factorial is: "<<endl;;
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		{
			cout<<b <<"  ";
		}
	}
	
	*c=a/2;
}
