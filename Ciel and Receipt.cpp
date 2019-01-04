#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t,n,k,m,count;
	cin>>t;
	while(t--)
	{
	   count=0;
	   cin>>n;
	   while(n!=0)
	   {
	       k=log2(n);
	       n=n-pow(2,k);
	       if(k>11)
	       {
	           count=count+pow(2,(k-11));
	       }
	       else
	       {
	           count++;
	       }
	   }
	   cout<<count<<endl;
	}
}
