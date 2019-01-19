#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x[10000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
        
    for(int i=0;i<n;i++)
    {
        int rem=0,xoxo=0;
        while(x[i]!=0)
        {
            rem=x[i]%10;
            xoxo=xoxo*10 + rem;
            x[i]=x[i]/10;
        }
        cout<<xoxo<<endl;
        
        
    }
    return 0;
}
