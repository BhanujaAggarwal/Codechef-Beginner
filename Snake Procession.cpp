#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int tail=0,head=0,n;
        string xoxo;
        cin>>n;
        cin>>xoxo;
        for(int f=0;f<n;f++)
        {
            if(xoxo[f]=='H')
            head++;
            if(xoxo[f]=='T')
            tail++;
        }
       if(head!=tail)
        cout<<"Invalid"<<endl;
        else
        {
            head=0;
            tail=0;
            int valid=0;
            for(int f=0;f<n;f++)
            {
                if(xoxo[f]=='H')
                head++;
                else if(xoxo[f]=='T')
                tail++;
                if(head==tail || head-tail==1)
                valid++;
            }
            if(valid==n)
            cout<<"Valid"<<endl;
            else
            cout<<"Invalid"<<endl;
        }
    }
        
    return 0;
}
  
