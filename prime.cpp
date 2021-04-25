#include<iostream>
using namespace std;
int n,c;

int main()
{
    cout<< "Enter a number" <<endl;
    cin>>n;
    for(c=2;c<n;c++)
    {
        if(n%c==0)
        {
          cout<< "Not Prime" <<endl;
          break;
        }
    }
    if(c==n)
    {
        cout<< "Prime" <<endl;
    }
}