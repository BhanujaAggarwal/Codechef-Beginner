#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,max=0,count=0,k=0,xoxo=0,lib=0,s=0,hehe=0,f=0;
        cin>>n;
        int l[n],r[n];
        for(int j=0;j<n;j++)
        {
            cin>>l[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>r[j];
        }
        for(int j=0;j<n;j++)
        {
            if(l[j]*r[j]>max)
            max=l[j]*r[j];
        }
        for(int j=0;j<n;j++)
        {
            if(l[j]*r[j]==max)
            {
                count++;
                k=j+1;
            }
        }
        if(count>1)
        {
            for(int j=0;j<n;j++)
            {
                if(r[j]>xoxo)
                {
                    xoxo=r[j];
                }
            }
            for(int j=0;j<n;j++)
            {
                if(r[j]==xoxo)
                {
                    lib++;
                    s=j+1;
                }
            }
            if(lib>1)
            {
                for(int j=0;j<n;j++)
                {
                    if(r[j]==xoxo)
                    {
                        cout<<j+1<<endl;
                        break;
                    }
                }
            }
            else
            {
                cout<<s<<endl;
            }
        }
        else
        {
            cout<<k<<endl;
        }
    }
    return 0;
}