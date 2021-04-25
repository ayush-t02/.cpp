#include<iostream>
#include<cmath>
using namespace std;

int64_t n,m,loc,temp;
int64_t p;
int main()
{
cin>>n;
int64_t a[n];
for(int i=0;i<n;i++)
    {
cin>>a[i];
        m=a[i];
        loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(m>a[j])
            {
                m=a[j];
                loc=j;
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }

p = (a[n-1])*(a[n-2]);
cout<<p<<endl;
}