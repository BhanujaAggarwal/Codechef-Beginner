#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int a,b,haha;
        cin>>a>>b;
        haha=__gcd(a, b);
        cout<<2*haha<<endl;
    }
    return 0;
}
