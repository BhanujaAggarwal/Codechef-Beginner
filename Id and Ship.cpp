#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]=='b'|| c[i]=='B')
        cout<<"BattleShip"<<endl;
        else if(c[i]=='c' || c[i]=='C')
        cout<<"Cruiser"<<endl;
        else if(c[i]=='d'|| c[i]=='D')
        cout<<"Destroyer"<<endl;
        else if(c[i]=='f'|| c[i]=='F')
        cout<<"Frigate"<<endl;
    }
    return 0;
    
}
