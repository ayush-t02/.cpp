#include<iostream>
#include<cmath>
using namespace std;
int n,m;

int main()
{
    cout<<"enter a no.";
    cin>>n;
    while(n!=0)
    {
    if(n>0)    
    {
      cout<<"Square root is "<<n; 
      break;  
    }
    else if(n==0)
    {
      cout<<"Square root is 0"; 
      break; 
    }
    else
    {
      cout<<"Enter a valid no.";
      cin>>n;
    }
    }
    return 0;
}