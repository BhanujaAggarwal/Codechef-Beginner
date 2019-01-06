#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,enddd=0;
        long int u,d;
        cin>>n>>u>>d;
        long long int xoxo[n],count=0;
        for(int y=0;y<n;y++)
        {
            cin>>xoxo[y];
        }
        for(int y=0;y<n-1;y++)
        {
            if(count==y)
            {
                if(xoxo[y]==xoxo[y+1])
                {
                    count++;
                }
                else if((xoxo[y]-xoxo[y+1])<=d && (xoxo[y]-xoxo[y+1])>0)
                {
                    count++;
                }
                else if((xoxo[y+1]-xoxo[y])<=u && (xoxo[y+1]-xoxo[y])>0)
                {
                    count++;
                }
                else if(xoxo[y]-xoxo[y+1]>d && enddd==0)
                {
                    count++;
                    enddd++;
                }
            }
        }
        cout<<count+1<<endl;
    }
    return 0;
}
