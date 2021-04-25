#include<iostream>
#include<cmath>
using namespace std;

int64_t n,m,w;
int64_t ma=0;
int main()
{
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n-1;i++)
{
m = a[i];
for(int j=i+1;j<n;j++)
{
w = a[j];
ma = max(ma,(m*w));
}
}
cout<<ma<<endl;
}