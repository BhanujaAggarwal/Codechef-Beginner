#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        string xoxo;
        cin>>n>>xoxo;
        int haha[n];
        for(int h=0;h<n;h++)
        {
            cin>>haha[h];
        }
        if(n==1 && haha[0]%2==0 && xoxo=="Dee" )
        {
                cout<<"Dee"<<endl;
        }
        else
        cout<<"Dum"<<endl;
    }
    return 0;
}