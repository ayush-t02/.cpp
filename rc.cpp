#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,i,j,m,temp,pent;
int main() 
{
  cin>>n;
  int count = 0;
  int arr[2*n];
  for(i=0;i<(2*n);i++)
  {
      cin>>arr[i];
  }
  for(int k=0;k<n-1;k++)
  {
      temp = arr[k];
  for(j=1;j<n;j++)
  {
      pent = arr[j];
      if(temp==pent)
      {
          count = count + 1;
      }
  }
   if(count=2)
   {
       cout<<"PRESENT"<<endl;
   }
   else
   {
       cout<<"NOT PRESENT"<<endl;
   }
  }
}
