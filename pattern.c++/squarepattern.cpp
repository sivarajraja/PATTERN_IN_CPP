#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    
    cout<<"enter n number:"<<endl;
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}