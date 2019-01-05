#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int xoxo,love,areaofsquare=0,areaofrectangle=0,secret;
        cin>>xoxo>>love;
        areaofrectangle=xoxo*love;
        while(xoxo!=love)
        {
            if(xoxo>love)
            xoxo=xoxo-love;
            else if(love>xoxo)
            love=love-xoxo;
        }
        areaofsquare=love*xoxo;
        secret=(areaofrectangle/areaofsquare);
        cout<<secret<<endl;
    }
    return 0;
}
