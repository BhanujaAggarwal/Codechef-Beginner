#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,small=0,big=0;
        cin>>a>>b;
        string xoxo;
        cin>>xoxo;
        for(int y=0;y<a;y++)
        {
            int r;
            r=xoxo[y];
            if(r>=97 && r<=122)
            small++;
            else if(r>=65 && r<=90)
            big++;
        }
        if(small>big)
        {
            if(big<=b && small>b)
            cout<<"chef"<<endl;
            else if(big<=b && small<=b)
            cout<<"both"<<endl;
            else
            cout<<"none"<<endl;
        }
        else if(small<big)
        {
            if(small<=b && big>b)
            cout<<"brother"<<endl;
            else if(small<=b && big<=b)
            cout<<"both"<<endl;
            else
            cout<<"none"<<endl;
        }
        else
        {
            if(small<=b)
        cout<<"both"<<endl;
        else 
        cout<<"none"<<endl;
        }
    }
    return 0;
}
  