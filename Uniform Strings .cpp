#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count=0;
        string xoxo;
        cin>>xoxo;
        xoxo[8]=xoxo[0];
        for(int j=0;j<8;j++)
        {
            if(xoxo[j]!=xoxo[j+1])
            count++;
        }
        if(count>2)
        {
            cout<<"non-uniform"<<endl;
        }
        else
        cout<<"uniform"<<endl;
    }
    return 0;
}