#include <bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--)
    {  
        long long int n;
        cin>>n;
        long long int xoxo[n],count=0,haha=0;
        for(long long int y=0;y<n;y++)
        {
            cin>>xoxo[y];
        }
        for(long long int y=0;y<n-1;y++)
        {
            if(xoxo[y+1]==xoxo[y]+1)
            {
                count++;
            }
        }
        sort(xoxo,xoxo+n);
        for(long long int y=0;y<n;y++)
        {
            if(xoxo[y]==y+1)
            {
                haha++;
            }
        }
        if(haha==n && count<n-1)
        {
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
    return 0;
} 
