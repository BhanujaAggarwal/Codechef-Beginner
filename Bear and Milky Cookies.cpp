#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0;
        cin>>n;
        string xoxo[n];
        for(int k=0;k<n;k++)
        {
            cin>>xoxo[k];
        }
        if(n==1)
        {
            if(xoxo[0]=="cookie")
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        else if(xoxo[n-1]=="cookie")
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int k=0;k<n-1;k++)
        {
            if(xoxo[k]=="cookie")
            {
                if(xoxo[k+1]=="milk")
                {
                    count++;
                }
            }
            else if(xoxo[k]=="milk")
            {
                count++;
            }
        }
        if(count==n-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
    }
    return 0;
}
