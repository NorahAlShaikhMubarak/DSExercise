#include <iostream>
 using namespace std; 
 int main() 
 { 
  int i,j, a[3][3],b[3][3],m[3][3];
  cout<<"Enter the numbers of the first array: "<<endl;
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	cin>>a[i][j];
  }
  
    cout<<"Enter the numbers of the second array: "<<endl;
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	cin>>b[i][j];
  }
  
  cout<<"the subtraction of array A and array B: "<<endl;
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	m[i][j]=a[i][j]-b[i][j];
  }
  for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		cout<<m[i][j]<<"  ";
	  }
  }
  return 0;
 }
