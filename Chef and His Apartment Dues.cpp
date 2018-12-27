#include <bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,g,fine=0,zeroes=0,ones=0,withoutfine=0,total=0;
        cin>>n;
        long long int xoxo[n];
        for(long long int y=0;y<n;y++)
        {
            cin>>xoxo[y];
            if(xoxo[y]==0)
            zeroes++;
        }
        for(long long int y=0;y<n;y++)
        {
            if(xoxo[y]==0)
            {
                g=y;
                break;
            }
        }
        if(zeroes==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
        fine=100*(n-g);
        withoutfine=1000*zeroes;
        total=fine+withoutfine;
        cout<<total<<endl;
        }
    }
    return 0;
}
 
