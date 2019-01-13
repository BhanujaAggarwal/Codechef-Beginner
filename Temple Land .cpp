#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int xoxo[n];
        for(int j=0;j<n;j++)
        cin>>xoxo[j];
        if(n%2==0)
        {
            cout<<"no"<<endl;
        }
        else 
        {
            int k,count=0;
            int s=(n/2);
            k=s+1;
            if(xoxo[0]==1)
            {
                for(int f=0;f<k-1;f++)
                {
                   if(xoxo[f+1]==xoxo[f]+1)
                   count++;
                }
                for(int f=k-1;f<n;f++)
                {
                   if(xoxo[f+1]==xoxo[f]-1)
                   count++;
                }
                if(count==n-1)
                cout<<"yes"<<endl;
                else
                cout<<"no"<<endl;
            }
            else
            cout<<"no"<<endl;
        }
    }
    return 0;
}