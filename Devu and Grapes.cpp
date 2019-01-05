#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(long long int f=0;f<t;f++)
    {
        long int n;
        long long int k,z,red=0;
        cin>>n>>k;
        long long xoxo[n];
        for(long long int y=0;y<n;y++)
        {
            cin>>xoxo[y];
        }
        long long int kryptonite[n]={0};
        for(long long int y=0;y<n;y++)
        {
            kryptonite[y]=xoxo[y]%k;
        }
        for(long long int y=0;y<n;y++)
        {
            if(xoxo[y]>=k)
            red=red+ min(kryptonite[y],k-kryptonite[y]);
            else
            red=red+(k-xoxo[y]);
        }
        cout<<red<<endl;
    }
    return 0;
}
