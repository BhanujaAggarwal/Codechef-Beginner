#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        float n,v1,v2;
        cin>>n>>v1>>v2;
        float stairs,elevator;
        stairs=(n*sqrt(2))/v1;
        elevator=2*(n/v2);
        if(stairs>elevator)
        cout<<"Elevator"<<endl;
        else
        cout<<"Stairs"<<endl;

    }
    return 0;
}
