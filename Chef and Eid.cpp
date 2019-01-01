#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    for(long long int j=0;j<t;j++)
    {
        cin>>n;
        long long int xoxo[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>xoxo[i];
        }
        sort(xoxo,xoxo+n);
        long long int mini=abs(xoxo[0]-xoxo[1]);
        for(long long int i=0;i<n-1;i++)
        {
            if(abs(xoxo[i]-xoxo[i+1])<mini)
            {
                mini=abs(xoxo[i]-xoxo[i+1]);
            }
        }
        cout<<mini<<endl;

    }

  return 0;
}
