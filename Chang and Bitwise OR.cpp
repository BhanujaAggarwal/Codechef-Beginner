#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int y=0;y<t;y++)
    {
        long int n;
        cin>>n;
        long long int sum=0,xoxo[n];
        for(int h=0;h<n;h++)
        {
            cin>>xoxo[h];
        }
        for(int h=0;h<n;h++)
        {
            sum=sum|xoxo[h];
        }
        cout<<sum<<endl;
    }
    return 0;
}
