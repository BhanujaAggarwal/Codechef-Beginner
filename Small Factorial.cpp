#include<bits/stdc++.h>

using namespace std;
int factorial(int x)
{
    if(x==0 || x==1)
    return 1;
    else 
    return (x*factorial(x-1));
}

int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<factorial(a[i])<<endl;
    }

    return 0;
}