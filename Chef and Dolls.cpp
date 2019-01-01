#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         long int n;
         cin>>n;
         long int a[n+1];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         sort(a,a+n);
         for(int i=0;i<n;i+=2)
         {
             if(i<n-1)
             {
             if(a[i]!=a[i+1])
                 {
                     cout<<a[i]<<endl;
                     break;
                 }
             }

             else
             {
                 cout<<a[n-1]<<endl;
                 break;
             }
         }

     }


    return 0;
}
