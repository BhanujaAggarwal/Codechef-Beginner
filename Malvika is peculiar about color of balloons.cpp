#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         int aa=0,bb=0;
         string str;
         cin>>str;
         for(int j=0;j<str.length();j++)
         {
             if(str[j]=='a')
             {
                 aa++;
             }
             else if(str[j]=='b')
             {
                 bb++;
             }
         }
         if(aa==0 || bb==0)
         cout<<"0"<<endl;
         
         else if(aa>bb)
         {
             cout<<bb<<endl;
         }
         else if(bb>aa)
         {
             cout<<aa<<endl;
         }
         else if(aa==bb)
         {
             cout<<aa<<endl;
         }
     }
    return 0;
}