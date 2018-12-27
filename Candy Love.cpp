#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for( i=0;i<t;i++)
    {
        int sad;
        cin>>sad;
        int hold_on[sad],pain_ends=0;
        for(int j=0;j<sad;j++)
        {
            cin>>hold_on[j];
            pain_ends=hold_on[j]+pain_ends;
        }
        if(pain_ends%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
