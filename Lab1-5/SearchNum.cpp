#include <iostream>
 using namespace std; 
 int main() 
 {    
  int x[9],i,j;
  for(i=0;i<10;i++)
  {
  	cout<<"Enter the element"<<i<<" : ";
  	cin>>x[i];
  }
cout<<"Enter the number you want to search for: ";
cin>>j;
for(i=0;i<10;i++)
{
	if(j==x[i])
	cout<<"Number "<<j<<" is found in element number "<<i<<endl;
	
}
return 0;
}
