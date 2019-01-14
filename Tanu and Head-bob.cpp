#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n,lol=0,lmao=0,rofl=0;
        cin>>n;
        char xoxo[n];
        cin>>xoxo;
        for(int j=0;j<n;j++)
        {
            if(xoxo[j]=='N')
            lol++;
            else if(xoxo[j]=='I')
            lmao++;
            else if(xoxo[j]=='Y')
            rofl++;
        }
        if(lol==n)
        cout<<"NOT SURE"<<endl;
        else if(lmao>=1)
        cout<<"INDIAN"<<endl;
        else if(rofl>=1)
        cout<<"NOT INDIAN"<<endl;
    }
    return 0;
}
