#include<iostream>
using namespace std;

int main()
{
    int n,i,s,j;

    cout<<"enter a number:";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(s=0; s<i; s++)
            cout<<"  ";

        for(j=0; j<9-(i+s); j++)
            cout<<"* ";

        cout<<endl;
    }
    return 0;
}