#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(b>a)
        {
            if(a%2==0)
            {
                if(b==a+2)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
            else
            {
                if(b==a+1)
                cout<<"YES"<<endl;
                else if(b==a+2)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
        else if(a>b)
        {
            if(b%2==0)
            {
                if(a==b+2)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
            else
            {
                if(a==b+1)
                cout<<"YES"<<endl;
                else if(a==b+2)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
        else if(a==b)
        cout<<"NO"<<endl;
    }
    return 0;
}
