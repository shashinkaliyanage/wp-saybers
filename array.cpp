#include <iostream>

using namespace std;

int main()
{
   long long int n=1000000,i,mod=1000000007,x;
   long long int a[n+1];
   a[0]=0;
   a[1]=1;
   a[2]=2;
   a[3]=4;
   for(i=4;i<=n;i++)
   {
       a[i]=a[i-1]+a[i-2]+a[i-3];
       a[i]=a[i]%mod;
   }
   cin>>x;
   cout<<a[x];
   return 0;
}
