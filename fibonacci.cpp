#include<iostream>
using namespace std;
int a=0,b=1,c=0,l;

int main()
{
   cout<< "enter the length of series" <<endl;
   cin>>l;
   cout<<a<< " "; 
   cout<<b<< " ";
   for(int i=1;i<=l-2;i++)
   {
      c =  a + b;
      a = b;
      b = c; 
      cout<<c<< " ";
   }
}