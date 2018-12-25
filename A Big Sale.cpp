#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        double tl=0,loss=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
        double p,q,d,np=0;
        cin>>p>>q>>d;
        np=p+((p*d)/100);
        np=np-((np*d)/100);
        loss=(p-np)*q;
        tl=tl+loss;
        }
        cout<<fixed<<setprecision(10)<<tl<<endl;
    }
    return 0;
}
