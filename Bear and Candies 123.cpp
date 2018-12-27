#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int l,b,limak=0,bob=0,sum=0,mus=0,g=1,f=2;
        cin>>l>>b;
        while(sum<=l)
        {
            sum=sum+g;
            g=g+2;
            limak++;
        }
        while(mus<=b)
        {
            mus=mus+f;
            f=f+2;
            bob++;
        }
        if(limak>bob)
        cout<<"Limak"<<endl;
        else
        cout<<"Bob"<<endl;
    }

    return 0;
}
