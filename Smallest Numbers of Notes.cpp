#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,count=0;
        cin>>m;
        while(m!=0)
        {
        if(m>=100)
        {
            m=m-100;
            count++;
        }
        else if(m>=50)
        {
            m=m-50;
            count++;
        }
        else if(m>=10)
        {
            m=m-10;
            count++;
        }
        else if(m>=5)
        {
            m=m-5;
            count++;
        }
        else if(m>=2)
        {
            m=m-2;
            count++;
        }
        else if(m>=1)
        {
            m=m-1;
            count++;
        }
        }
        cout<<count<<endl;
    }
    

    return 0;
}
