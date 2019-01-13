#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int a[n],b[n],la[n],lb[n];
    for(long int y=0;y<n;y++)
    {
        cin>>a[y]>>b[y];
    }
    for(long int y=1;y<n;y++)
    {
        a[y]=a[y]+a[y-1];
        b[y]=b[y]+b[y-1];
    }
    for(long int y=0;y<n;y++)
    {
        la[y]=a[y]-b[y];
        lb[y]=b[y]-a[y];
    }
    sort(la,la+n);
    sort(lb,lb+n);
    if(la[n-1]>lb[n-1])
    {
        cout<<"1"<<" "<<la[n-1];
    }
    else
    cout<<"2"<<" "<<lb[n-1];
    return 0;
}