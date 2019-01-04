#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count=0;
        string xoxo;
        cin>>xoxo;
        for(int j=0;j<xoxo.length()-1;j++)
        {
        if((int)xoxo[j]>(int)xoxo[j+1])
        count++;
        }
        if(count==0)
        {
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }

    return 0;
}
