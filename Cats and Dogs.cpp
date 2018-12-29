#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int cats,dogs,legs,minimum,maximum;
        cin>>cats>>dogs>>legs;
        if(cats>dogs*2)
        {
            minimum=4*(dogs+cats-dogs*2);
        }
        else
        {
           minimum=4*dogs;
        }
        maximum=4*(cats+dogs);
        if(legs<=maximum && legs>=minimum && legs%4==0)
        {
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
    return 0;
}
