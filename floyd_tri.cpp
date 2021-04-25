#include<iostream>
using namespace std;
int n,m=0;

int main()
{
    cout<<"enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            m = m + 1;
            cout<<m<<" ";
        }
        cout<<endl;
    }
}