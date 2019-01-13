#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        long long int xoxo[n];
        for(long long int j=0;j<n;j++)
        {
            cin>>xoxo[j];
        }
        long long int mini=boost::math::lcm(xoxo[0],xoxo[1]);
        for(long long int j=0;j<n-1;j++)
        {
            for(long long int k=j+1;k<n;k++)
            {
                long long int dreams=boost::math::lcm(xoxo[j],xoxo[k]);
                if(mini>dreams)
                mini=dreams;
            }
        }
        cout<<mini<<endl;
        
    }
    return 0;
}