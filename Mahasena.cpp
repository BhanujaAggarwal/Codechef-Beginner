#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[10000],count=0,xoxo=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
        
    }
    xoxo=n-count;
    if(count>xoxo)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
    

    return 0;
}
