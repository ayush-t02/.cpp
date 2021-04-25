#include<iostream>
using namespace std;
int a,b,c;

int main()
{
    cout<< "Enter the range!" <<endl;
    cin>>a>>b;

    for(c=a;c<=b;c++)
    {
        int i;
       for(i=2;i<c;i++)
       {
          if(c%i==0)
          {
              break;
          } 
       }
       if(i==c)
       {
           cout<<i<<endl;
       }
    }           
}