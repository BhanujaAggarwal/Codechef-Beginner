#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,n;
        cin>>m>>n;
        int rx,ry;
        cin>>rx>>ry;
        int k;
        cin>>k;
        string xoxo;
        cin>>xoxo;
        int left=0,right=0,up=0,down=0;
        for(int j=0;j<k;j++)
        {
            if(xoxo[j]=='L')
            {
                left++;
            }
            if(xoxo[j]=='R')
            {
                right++;
            }
            if(xoxo[j]=='U')
            {
                up++;
            }
            if(xoxo[j]=='D')
            {
                down++;
            }
        }
        int xcrdnt,ycrdnt;
        xcrdnt=right-left;
        ycrdnt=up-down;
        if(xcrdnt==rx && ycrdnt==ry)
        {
            cout<<"Case "<<i+1<<": REACHED"<<endl;
        }
        else if(xcrdnt<0 || ycrdnt<0 || xcrdnt>m || ycrdnt>n)
        {
            cout<<"Case "<<i+1<<": DANGER"<<endl;
        }
        else
        cout<<"Case "<<i+1<<": SOMEWHERE"<<endl;
    }
    return 0;
}
