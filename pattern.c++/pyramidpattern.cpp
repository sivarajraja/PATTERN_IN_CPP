#include<iostream>
using namespace std;

int main()
{
    int n,i,j,s;

    cout<<"enter n number:";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(s=0; s<(n-i)-1; s++)
            cout<<"  ";

            for(j=0; j<(i*2)+1; j++)
            cout<<"* ";

            cout<<endl;
    }
    return 0;
}