#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,s;

    cout<<"enter n value:";
    cin>>n;

    for(i=-n; i<=n; i++)
    {
        if(i<0)
            k=-i;
        else
            k=i;

        for(s=0; s<k; s++)
            cout<<"  ";
        
        for(j=0; j<2*(n-k)+1; j++)
            cout<<"* ";

        cout<<endl;
    }
    return 0;
}