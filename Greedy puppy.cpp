#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n,k;
        cin>>n>>k;
        int xoxo[k];
        for(int j=1;j<=k;j++)
        {
            xoxo[j-1]=n%j;
        }
        sort(xoxo,xoxo+k);
        cout<<xoxo[k-1]<<endl;
        
    }
    return 0;
}
