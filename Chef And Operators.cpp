#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10000],b[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        cout<<">"<<endl;
        else if(a[i]<b[i])
        cout<<"<"<<endl;
        else
        cout<<"="<<endl;
    }


    return 0;
}
