#include <bits/stdc++.h>
using namespace std;
int main()
{
        int tryy,lights=0;
        cin>>tryy;
        for(int j=0;j<tryy;j++)
        {
            int sunshine=0;
            string fire;
            cin>>fire;
            for(int h=0;h<fire.length()-1;h++)
            {
                if(fire[h]=='c' && fire[h+1]=='h')
                sunshine++;
                {
                    if(sunshine==1)
                    break;
                }
                if(fire[h]=='h' && fire[h+1]=='e')
                sunshine++;
                {
                    if(sunshine==1)
                    break;
                }
                if(fire[h]=='e' && fire[h+1]=='f')
                sunshine++;
                {
                    if(sunshine==1)
                    break;
                }
            }
            if(sunshine==1)
            lights++;
        }
        cout<<lights;
    return 0;
} 
