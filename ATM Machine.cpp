#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int xoxo[n];
        for(int i=0;i<n;i++)
        {
            cin>>xoxo[i];
            if(k>=xoxo[i])
            {
                k=k-xoxo[i];
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }

    return 0;
}
