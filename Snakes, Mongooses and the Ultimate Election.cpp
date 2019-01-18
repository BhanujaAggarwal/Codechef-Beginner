#include <bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {  string xoxo;
        cin>>xoxo;
        int n=xoxo.length(),snakeyy=0,monguuu=0;
        for(int j=0;j<n;j++)
        { if(xoxo[j]=='s')
            snakeyy++;
            else
            monguuu++;
        }
        int f=0;
        while(f<n-1)
        {  if(xoxo[f]=='s')
            {    if(xoxo[f+1]=='s')
                {
                    f++;
                }
                else
                {
                    f+=2;
                    snakeyy--;
                }
            }
            else
            { if(xoxo[f+1]=='m')
                {
                    f++;
                }
                else
                {
                    f+=2;
                    snakeyy--;
                }
            }
            
        }
        if(snakeyy>monguuu)
        cout<<"snakes"<<endl;
        else if(monguuu>snakeyy)
        cout<<"mongooses"<<endl;
        else
        cout<<"tie"<<endl;
    }
    return 0;
} 
