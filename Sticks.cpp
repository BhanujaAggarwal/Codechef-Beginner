#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int xoxo[n];
        for(int j=0;j<n;j++)
        {
            cin>>xoxo[j];
        }
        sort(xoxo,xoxo+n);
        int love[n]={0},s=0;
        for(int j=1;j<n;j+=2)
        {
            if(xoxo[j]==xoxo[j-1])
            {
                love[s]=xoxo[j];
                s++;
            }
            else
            {
                j--;
            }
        }
        if(s>=2)
        {
            sort(love,love+s);
            cout<<(love[s-1]*love[s-2])<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}