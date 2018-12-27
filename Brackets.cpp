#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(long long int f=0;f<t;f++)
    {
        string xoxo;
        cin>>xoxo;
        long int desire=0,flame=0;
        long int n=xoxo.length();
        for(long int d=0;d<n;d++)
        {
            if(xoxo[d]=='(')
            desire++;
            else
            desire--;
            flame=max(flame,desire);
        }
        for(long int d=0;d<flame;d++)
        {
            cout<<"(";
        }
        for(long int d=0;d<flame;d++)
        {
            cout<<")";
        }
        cout<<endl;
    }
    return 0;
}
