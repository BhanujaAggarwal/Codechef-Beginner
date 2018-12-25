#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int q,p;
        cin>>q>>p;
        int xoxo[q];
        int dt=0,ey=0;
        for(int j=0;j<q;j++)
        {
            cin>>xoxo[j];
        }
        for(int j=0;j<q;j++)
        {
            if(xoxo[j]>=p/2)
            ey++;
            else if(xoxo[j]<=p/10)
            dt++;
        }
        if(ey==1 && dt==2)
        {
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;



    }

    return 0;
}
