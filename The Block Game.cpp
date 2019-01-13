#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a[10000],b[10000]={0},r[10000]={0},rem[10000]={0};
    cin>>t;
    for(int i=0; i<t ; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<t ; i++)
    {
        b[i]=a[i];
        while(b[i]!=0)
        {
            rem[i]=b[i]%10;
            r[i]=r[i]*10+rem[i];
            b[i]=b[i]/10;
        }
        if(r[i]==a[i])
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"losses"<<endl;
        }
        
    }
    
    
    
    
    
    
    
    return 0;
}
