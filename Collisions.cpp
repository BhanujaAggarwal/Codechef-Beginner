#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int r,c,count=0,haha=0;
        cin>>r>>c;
        string xoxo[r];
        for(int j=0;j<r;j++)
        {
            cin>>xoxo[j];
        }
        for(int h=0;h<c;h++)
        {
            count=0;
            for(int j=0;j<r;j++)
            {
                if(xoxo[j][h]=='1')
                {
                    count++;
                }
            }
            if(count>1)
            {
                haha=haha+((count*(count-1))/2);
            }
        }
        cout<<haha<<endl;
    }
    return 0;
}
