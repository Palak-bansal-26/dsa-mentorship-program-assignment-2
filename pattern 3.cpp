#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for (row=0;row<=n;row++)
    {
        for (space=n;space>=row-1;space--)
        {
            cout<<" ";
        }
        for (col=0;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
