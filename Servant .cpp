#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<10)
        cout<<"What an obedient servant you are!"<<" ";
        else
        cout<<"-1"<<" ";
    }

    return 0;
}
