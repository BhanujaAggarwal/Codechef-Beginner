#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t;
    cin>>t;
    for( i=0;i<t;i++)
    {
        int n,laddu=0;
        string nation;
        cin>>n>>nation;
        for(int j=0;j<n;j++)
        {
            string s;
            cin>>s;
            if(s=="CONTEST_WON")
            {
                int rank,bonus=0;
                cin>>rank;
                if(rank>20)
                bonus=0;
                else
                bonus=20-rank;
                laddu=laddu+300+bonus;
            }
            else if(s=="TOP_CONTRIBUTOR")
            {
                laddu=laddu+300;
            }
            else if(s=="BUG_FOUND")
            {
                int rank;
                cin>>rank;
                laddu=laddu+rank;
            }
            else if(s=="CONTEST_HOSTED")
            {
                laddu=laddu+50;
            }
        }
        if(nation=="INDIAN")
        cout<<laddu/200<<endl;
        else 
        cout<<laddu/400<<endl;
    }
    return 0;
} 