#include <iostream>
#include <string.h>
 using namespace std; 
 int main() 
 {
 	char str1[100],str2[100];
 	cout<<"input a word you want to check if its a palindrome or not: "<<endl;
 	cin.getline(str1,100);
 	strrev(str1);
 	strcpy(str2,str1);
 	strrev(str2);
 	if(strcmp(str1, str2)==0)
 	
 	cout<<"The word is palindrome ";
 	else
 	cout<<"The word is not palindrome ";
 	
 	return 0;
 }
