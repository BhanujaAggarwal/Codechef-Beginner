#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
int main() 
{ 
    ll t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a==c)
        {
            if(b>d)
            {
                cout<<"down"<<endl;
            }
            else
            {
                cout<<"up"<<endl;
            }
        }
        else if(b==d)
        {
            if(a>c)
            {
                cout<<"left"<<endl;
            }
            else
            {
                cout<<"right"<<endl;
            }
        }
        else
        {
            cout<<"sad"<<endl;
        }
    }
    
    return 0; 
}