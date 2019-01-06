#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n,xoxo=1,s=1;
        cin>>n;
        if(n==1 || n==0)
        {
            cout<<s<<endl;
        }
        else
        {
            while(n>=xoxo)
            {
                s++;
                xoxo=s*s;
            }
            cout<<s-1<<endl;
        }


    }

    return 0;
}
