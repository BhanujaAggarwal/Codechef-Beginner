#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000],b[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
     for(int i=0;i<n;i++)
     {
         cout<<(a[i]+b[i])<<endl;
     }
     return 0;

} 
