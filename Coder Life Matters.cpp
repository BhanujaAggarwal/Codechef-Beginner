#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int xoxo[30],count=0;
        for(int h=0;h<30;h++)
        {
            cin>>xoxo[h];
        }
        for(int h=0;h<25;h++)
        {
            if(xoxo[h]==1 && xoxo[h+1]==1 && xoxo[h+2]==1 && xoxo[h+3]==1 && xoxo[h+4]==1 && xoxo[h+5]==1)
            {
              count++;
              if(count==1)
              break;
            }
        }
        if(count==1)
        {
            cout<<"#coderlifematters"<<endl;
        }
        else
        {
            cout<<"#allcodersarefun"<<endl;
        }
    }
    return 0;
}
