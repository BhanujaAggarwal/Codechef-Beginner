#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string xoxo,love;
        cin>>xoxo>>love;
        int n,maxi=0,mini=0;
        n=xoxo.length();
        for(int j=0;j<n;j++)
        {
            if(xoxo[j]!=love[j])
            {
                if(xoxo[j]!='?' && love[j]!='?')
               {
                   mini++;
                   maxi++;
               }
               else if(xoxo[j]!='?'|| love[j]!='?')
               maxi++;
            }
            else
            {
                if(xoxo[j]=='?')
                maxi++;
            }
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
