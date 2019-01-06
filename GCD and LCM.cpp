#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int a,b,c,d,gcd;
        cin>>a>>b;
        c=a;
        d=b;
        while(a!=b)
        {
            if(a>b)
            a=a-b;
            else if(b>a)
            b=b-a;
        }
        gcd=a;
        cout<<a<<" "<<(c*d)/a<<endl;
    }


    return 0;
}
