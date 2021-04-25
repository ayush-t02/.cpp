#include<iostream>
using namespace std;
int num,sum=0,digit,fact=1,m;
int main()
{
   cout<<"enter the num"<<endl;
   cin>>num;
   m = num;
   while(num>0)
   {
      digit = num%10;  
      num = num/10;  
      cout<<digit<<endl; //digit extraction
    
      for(int i=1;i<=digit;i++)
      {
        fact = fact*i;
      }
      sum = sum + fact;
      fact = 1;
   }
      cout<<sum<<endl;

   if(m==sum)
   {
      cout<<"Strong"<<endl; 
   }
   else
   {
      cout<<"Nope!";
   }
   
}