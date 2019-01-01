#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0,xoxo=0;
        cin>>n;
        int chef[n],glove[n];
        for(int j=0;j<n;j++)
        cin>>chef[j];
        for(int j=0;j<n;j++)
        cin>>glove[j];
        for(int j=0;j<n;j++)
        {
            if(chef[j]<=glove[j])
            count++;
        }
        for(int j=0;j<n;j++)
        {
            if(chef[j]<=glove[n-j-1])
            xoxo++;
        }
        if(count+xoxo==2*n)
        cout<<"both"<<endl;
        else if(count==n)
        cout<<"front"<<endl;
        else if(xoxo==n)
        cout<<"back"<<endl;
        else
        cout<<"none"<<endl;
    }
    return 0;
}
