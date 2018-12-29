#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,cakewalk=0,simple=0,easy=0,medium=0,hard=0;
        cin>>n;
        string xoxo[n];
        for(int i=0;i<n;i++)
        {
            cin>>xoxo[i];
            if(xoxo[i]=="cakewalk")
            cakewalk++;
            else if(xoxo[i]=="simple")
            simple++;
            else if(xoxo[i]=="easy")
            easy++;
            else if(xoxo[i]=="easy-medium" || xoxo[i]=="medium")
            medium++;
            else if(xoxo[i]=="medium-hard" || xoxo[i]=="hard")
            hard++;
        }
        if(cakewalk>=1 && simple>=1 && easy>=1 && medium>=1 && hard>=1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}
