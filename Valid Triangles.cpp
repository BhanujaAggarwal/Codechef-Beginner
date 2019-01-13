#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c==180)
        {
        if(a==0 || b==0 || c==0)
        {
            cout<<"NO"<<endl;
            break;
        }
        cout<<"YES"<<endl;
        }
        else 
        cout<<"NO"<<endl;
        
    }
    

    return 0;
}
