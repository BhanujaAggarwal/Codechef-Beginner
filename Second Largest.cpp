#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       long long int a,b,c,max,min,sum;
       cin>>a>>b>>c;
       sum=a+b+c;
        max=a;
        if(b>a)
        {
            max=b;
            if(c>b)
            max=c;
        }
        
        else if(c>a)
        {
            max=c;
            if(b>c)
            max=b;
        }
        min=a;
        if(b<a)
        {
            min=b;
            if(b>c)
            min=c;
        }
        else if(c<a)
        {
            min=c;
            if(b<c)
            min=b;
        }
        cout<<sum-max-min<<endl;
    }
    return 0;
    }