#include <iostream>

using namespace std;

int main()
{
    int t;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        int b;

        cin>>b;

        int xoxo,sum=0;

        xoxo=(b-2)/2;

        for(int j=xoxo;j>0;j--)
        {
            sum=sum+j;
        }
        cout<<sum<<endl;
    }



    return 0;
}
