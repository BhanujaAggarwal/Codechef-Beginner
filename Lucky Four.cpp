#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    string str;
    cin>>str;
    int xoxo=0;
    for(int j=0;j<str.length();j++)
    {
        if(str[j]=='4')
        xoxo++;
    }
    cout<<xoxo<<endl;
    
    
    }
    

    return 0;
}

