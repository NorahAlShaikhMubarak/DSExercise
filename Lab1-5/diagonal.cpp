#include <iostream>
 using namespace std; 
 int main()
 {
 	int row,col,a[3][3],sum=0;
 	cout<<"Enter the elemets of the array: "<<endl;
 	for(row=0;row<3;row++)
 	{
 		for(col=0;col<3;col++)
 		cin>>a[row][col];
	 }
	 
	 for(int i=0;i<3;i++)
	 sum=sum+a[i][i];
	 cout<<"The sum of the diagonal elements is: "<<sum;
	 
	 return 0;
 }
 
