#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int count=0;
        long int k;
        cin>>k;
        if(k==2)
        cout<<"yes"<<endl;
        else if(k==0)
        cout<<"no"<<endl;
        else if(k==1)
        cout<<"no"<<endl;
        else
        {
        for(int j=2;j<k;j++)
        {
            if(k%j==0)
                {
                    cout<<"no"<<endl;
                    break;
                }
                else 
                count++;
        }
        if(count==k-2)
        cout<<"yes"<<endl;
        }
    }

    return 0;
}