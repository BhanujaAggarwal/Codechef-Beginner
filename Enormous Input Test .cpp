#include <iostream>

using namespace std;

int main()
{
    int t,k,count=0;
    cin>>t>>k;
    long long int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]%k==0)
        count++;
    }
    cout<<count;


    return 0;
}
