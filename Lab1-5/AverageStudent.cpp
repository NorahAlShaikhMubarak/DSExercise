#include <iostream>
using namespace std;
void AvgSmallLarge(int s1,int s2,int s3, int *avg, int *small, int*large);
int main()
{
	int s1,s2,s3;
	int avg,small,large;
	cout<<"Enter the marks for 3 students: "<<endl;
	cin>>s1>>s2>>s3;
	AvgSmallLarge(s1,s2,s3, &avg, &small, &large);
	cout<<"The avarge value is: "<<avg<<endl;
	cout<<"The smallest value is: "<<small<<endl;
	cout<<"The largest value is: "<<large<<endl;
	
	return 0;
}
void AvgSmallLarge(int s1,int s2,int s3, int *avg, int *small, int*large)
{
	if((s1>s2)&(s1>s3))
	*large=s1;
	else if ((s2>s1)&(s2>s3))
	*large=s2;
	else
	*large=s3;
	
	if ((s1<s2)&(s1<s3))
	*small=s1;
	else if ((s2<s1)&(s2<s3))
	*small=s2;
	else
	*small=s3;
	
	*avg=(s1+s2+s3)/3;
}
