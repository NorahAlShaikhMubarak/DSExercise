
#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
    char a[50],temp;
    int x,y,len;
    cout<<"Enter a string: ";
    gets(a);
    len=strlen(a);
 
    cout<<"Reverse of the string is: ";
 
    for(x=0,y=len-1;x<len/2;++x,--y)
    {
        temp=a[x];
        a[x]=a[y];
        a[y]=temp;
    }
 
    cout<<a;
    return 0;
}
