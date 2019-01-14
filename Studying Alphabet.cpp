#include <bits/stdc++.h>
using namespace std;
int main()
{
        string xoxo;
        cin>>xoxo;
        int n=xoxo.length();
        int k;
        cin>>k;
        for(int y=0;y<k;y++)
        {
            long int count=0;
            string we_got_the_fire;
            cin>>we_got_the_fire;
            int we_gonna_let_it_burn=we_got_the_fire.length();
            for(int h=0;h<we_gonna_let_it_burn;h++)
            {
                for(int s=0;s<n;s++)
                {
                    if(we_got_the_fire[h]==xoxo[s])
                    count++;
                }
            }
            if(count==we_gonna_let_it_burn)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    return 0;
}