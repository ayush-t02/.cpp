#include<iostream>
using namespace std;
int n;

int main()
{
   cout<<"enter n";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=n;j>=i;j--)
       {
           cout<<"*";
       }
       cout<<endl;
   }
}