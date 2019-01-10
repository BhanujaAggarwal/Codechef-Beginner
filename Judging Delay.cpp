#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,count=0,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        while(n--)
        {
            cin>>a>>b;
            if(b-a>5)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    
    return 0;
}