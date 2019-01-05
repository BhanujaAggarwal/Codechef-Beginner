#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int s[n],xoxo[n];
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
            xoxo[j]=s[j];
        }
        sort(s,s+n);
        int ratio=1;
        for(int g=s[0];g>1;g--)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(s[j]%g==0)
                count++;
            }
            if(count==n)
            {
                ratio=g;
                break;
            }
        }
        for(int r=0;r<n;r++)
        {
            cout<<(xoxo[r]/ratio)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
