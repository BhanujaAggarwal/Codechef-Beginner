#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         int a,o,gold;
         cin>>a>>o>>gold;
         int xoxo=abs(a-o);
         if(xoxo>gold)
         {
             xoxo=xoxo-gold;
             cout<<xoxo<<endl;
         }
         else if(xoxo<gold)
         {
                 cout<<"0"<<endl;
         }
         else if(xoxo==gold)
         {
             cout<<"0"<<endl;
         }
     }




    return 0;
}
