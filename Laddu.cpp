#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        long long int n,b,m,timee=0;
        cin>>n>>b>>m;
        while(n>0)
        {
            if(n%2==0)
            {
                timee=timee+((n/2)*m)+b;
                n=n/2;
                m=m*2;
            }
            else
            {
                if(n==1)
                {
                    timee=timee+(((n+1)/2)*m);
                    n=0;
                }
                else
                {
                    timee=timee+(((n+1)/2)*m)+b;
                    n=(n-1)/2;
                    m=m*2;
                }
            }
        }
        cout<<timee<<endl;
    }
    return 0;
}