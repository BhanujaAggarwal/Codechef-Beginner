#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        long int n,k;
        cin>>n>>k;
        double xoxo[n];
        double sum=0;
        for(long long int j=0;j<n;j++)
        {
            cin>>xoxo[j];
            sum=sum+xoxo[j];
        }
        sort(xoxo,xoxo+n);
        for(long long int j=0;j<k;j++)
        {
            sum=sum-xoxo[j];
        }
        for(long long int j=n-k;j<n;j++)
        {
            sum=sum-xoxo[j];
        }
        cout<<fixed<<setprecision(6)<<sum/(n-(2*k))<<endl;
    }
    return 0;
}