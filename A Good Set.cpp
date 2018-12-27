#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(long long int i=1;i<2*n+1;i=i+2)
        {
          cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
