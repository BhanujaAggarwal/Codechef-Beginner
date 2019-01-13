#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,sumy=0,sumx=0,sum=0,sux=0,suy=0,su=0;
        cin>>n;
        long long int yana[n];
        long long int xenny[n];
        for(int i=0;i<n;i++)
        {
            cin>>xenny[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>yana[i];
        }
        if(n%2==0)
        {
        for(int i=0;i<n-1;i+=2)
        {
            sumx=sumx+xenny[i];
        }
        for(int i=1;i<n;i+=2)
        {
            sumy=sumy+yana[i];
        }
        sum=sumy+sumx;
        
        for(int i=1;i<n;i+=2)
        {
            sux=sux+xenny[i];
        }
        for(int i=0;i<n-1;i+=2)
        {
            suy=suy+yana[i];
        }
        su=suy+sux;
        if(su>sum)
        cout<<sum<<endl;
        else
        cout<<su<<endl;
        }
        else if(n%2!=0)
        {
            for(int i=0;i<n;i+=2)
        {
            sumx=sumx+xenny[i];
        }
        for(int i=1;i<n;i+=2)
        {
            sumy=sumy+yana[i];
        }
        sum=sumy+sumx;
        
        for(int i=1;i<n;i+=2)
        {
            sux=sux+xenny[i];
        }
        for(int i=0;i<n;i+=2)
        {
            suy=suy+yana[i];
        }
        su=suy+sux;
        if(su>sum)
        cout<<sum<<endl;
        else
        cout<<su<<endl;
        }
        }
    return 0;
}
