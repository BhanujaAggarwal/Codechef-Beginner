#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,k;
        cin>>n;
        k=((pow(8*n+1,0.5)-1)/2);
        cout<<k<<endl;
    }
    return 0;
}
