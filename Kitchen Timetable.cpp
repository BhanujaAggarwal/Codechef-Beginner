#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n;
        cin>>n;
        long long int xoxo[n],love[n],food[n],count=0;
        for(int j=0;j<n;j++)
        {
            cin>>xoxo[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>love[j];
        }
        food[0]=xoxo[0];
        for(int j=1;j<n;j++)
        {
            food[j]=xoxo[j]-xoxo[j-1];
        }
        for(int j=0;j<n;j++)
        {
            if(food[j]>=love[j])
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}