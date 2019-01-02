#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(long long int f=0;f<t;f++)
    {
        long long int n,k;
        cin>>n;
        long long int xoxo[n];
        for(long long int i=0;i<n;i++)
        cin>>xoxo[i];
        cin>>k;
        long long int alone[k],count=0;
        for(long long int i=0;i<k;i++)
        cin>>alone[i];
        for(long long int j=0;j<k;j++)
        {
            for(long long int i=0;i<n;i++)
            {
                    if(alone[j]==xoxo[i])
                    {
                        count++;
                        break;
                    }
            }
        }
        if(count>=k)
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    }
    return 0;
}
