#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        string xoxo[4],love[4];
        for(int j=0;j<4;j++)
        {
            cin>>xoxo[j];
        }
        for(int j=0;j<4;j++)
        {
            cin>>love[j];
        }
        int count=0;
        for(int j=0;j<4;j++)
        {
            for(int h=0;h<4;h++)
            {
                if(xoxo[j]==love[h])
                count++;
            }
        }
        if(count>=2)
        {
            cout<<"similar"<<endl;
        }
        else
        cout<<"dissimilar"<<endl;
        
    }
    return 0;
}