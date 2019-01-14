#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i,c,sum=0;
    
    for(i=0;i<n;i++)
    {
    while(a[i]>0)
    {
        c=a[i]%10;
        a[i]=a[i]/10;
        sum=sum+c;
       
    }
     cout<<sum<<endl;
     sum=0;
    }
    

    return 0;
}
