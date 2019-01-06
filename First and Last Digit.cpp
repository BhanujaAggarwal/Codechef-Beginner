#include <bits/stdc++.h>

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
    for(int i=0;i<n;i++)
    {
        int lastdigit,firstdigit;
        lastdigit=a[i]%10;
        int digits;
        digits=log10(a[i]);
        firstdigit=a[i]/pow(10,digits);
        int result;
        result=lastdigit+firstdigit;
        cout<<result<<endl;
    }


    return 0;
}
