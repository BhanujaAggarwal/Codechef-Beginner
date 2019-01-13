#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int xoxo[t];
    for(int i=0;i<t;i++)
    {
        cin>>xoxo[i];
    }
    sort(xoxo,xoxo+t);
    for(int i=0;i<t;i++)
    {
    cout<<xoxo[i]<<endl;
    }
    
    
    
    
    return 0;
}
