#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,k;
        cin>>n>>k;
        long long int xoxo[n],sum=0;
        for(long long int h=0;h<n;h++)
        {
            cin>>xoxo[h];
            sum=sum+xoxo[h];
        }
        if(k==1)
        {
            if(sum%2==0)
            cout<<"odd"<<endl;
            else
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"even"<<endl;
        }
    }
    return 0;
}