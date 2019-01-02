#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        int chef=0,opponent=0;
        string xoxo;
        cin>>xoxo;
        int n=xoxo.length();
        for(int j=0;j<n;j++)
        {
            if(xoxo[j]=='0')
            opponent++;
            else if(xoxo[j]=='1')
            chef++;
        }
        if(chef>=12 || opponent>=12)
        {
            if(xoxo[n-1]=='0' && xoxo[n-2]=='0')
            cout<<"LOSE"<<endl;
            else
            cout<<"WIN"<<endl;
        }
        else if(opponent==11)
        cout<<"LOSE"<<endl;
        else
        cout<<"WIN"<<endl;

    }
    return 0;
}
