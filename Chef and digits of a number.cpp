#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int one=0,zero=0;
        string xoxo;
        cin>>xoxo;
        int xoxokilength=xoxo.length();
        for(int j=0;j<xoxokilength;j++)
        {
            if(xoxo[j]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if(zero==1 || one==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    }

    return 0;
}
