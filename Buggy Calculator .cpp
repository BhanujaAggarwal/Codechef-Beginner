#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,sum=0,s=0;
        cin>>a>>b;
        if(a>b)
        {
        while(a!=0)
        {
            sum=sum+((a%10+b%10)%10)*pow(10,s);
            a=a/10;
            b=b/10;
            s++;
        }
        cout<<sum<<endl;
        }
                else if(b>=a)
        {
        while(b!=0)
        {
            sum=sum+((a%10+b%10)%10)*pow(10,s);
            a=a/10;
            b=b/10;
            s++;
        }
        cout<<sum<<endl;
        }

    }

    return 0;
}
