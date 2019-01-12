#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    float bs[10000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>bs[i];
    }
    float hra[10000],da[10000];
    for(int i=0;i<t;i++)
    {
        if(bs[i]<1500)
        {
            hra[i]=bs[i]/10;
            da[i]=0.9*bs[i];
        }
        else
        {
        hra[i]=500;
        da[i]=0.98*bs[i];
        }
        cout<<fixed<<setprecision(2)<<bs[i]+hra[i]+da[i]<<endl;
    }
    return 0;
}
