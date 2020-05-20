#include <iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;

    cout<<"Enter rows and columns for first matrix: ";
    cin>> r1 >> c1;
    cout<<"Enter rows and columns for second matrix: ";
    cin>> r2 >> c2;

    while (c1!=r2)
    {
        cout<<"Error the column of the first matrix is not equal to the row of second";

        cout<<"Enter rows and columns for the first matrix: ";
        cin>>r1>>c1;

        cout<<"Enter rows and columns for the second matrix: ";
        cin>>r2>>c2;
    }

    cout<<"Enter elements of the first matrix :"<<endl;
    for(i=0;i<r1;++i)
        for(j=0;j<c1;++j)
        {
        cin>>a[i][j];
        }
    cout << endl << "Enter elements of the second matrix :"<<endl;
    for(i=0;i<r2;++i)
        for(j=0;j<c2;++j)
        {
            
            cin>>b[i][j];
        }

    for(i=0;i<r1;++i)
        for(j=0;j<c2;++j)
        {
            mult[i][j]=0;
        }

    for(i=0;i<r1;++i)
        for(j=0;j<c2;++j)
            for(k=0;k<c1;++k)
            {
                mult[i][j]+=a[i][k]*b[k][j];
            }

    cout<<"Output Matrix: "<<endl;
    for(i=0;i<r1;++i)
    for(j=0;j<c2;++j)
    {
        cout << " " << mult[i][j];
        if(j==c2-1)
            cout<<endl;
    }

    return 0;
}
