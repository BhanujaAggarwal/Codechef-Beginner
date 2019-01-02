#include<bits/stdc++.h>

using namespace std;

int main()
{
    int max,n,a[10000],b[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        max=a[i];
        if(a[i]<b[i])
        {
            max=b[i];
        }
        cout<<max<<" "<<a[i]+b[i]<<" ";

    }



    return 0;
}
