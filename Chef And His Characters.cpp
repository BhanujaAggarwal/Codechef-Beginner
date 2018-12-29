#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int h=0;h<t;h++)
    {
       int count=0;
       string fire;
       cin>>fire;
       long int lenghtt=fire.length()-3;
       for(long int f=0;f<lenghtt;f++)
       {
           if(fire[f]=='c' && fire[f+1]=='h' && fire[f+2]=='e' && fire[f+3]=='f')
           count++;
           else if(fire[f]=='c' && fire[f+1]=='h' && fire[f+2]=='f' && fire[f+3]=='e')
           count++;
           else if(fire[f]=='c' && fire[f+1]=='e' && fire[f+2]=='f' && fire[f+3]=='h')
           count++;
           else if(fire[f]=='c' && fire[f+1]=='e' && fire[f+2]=='h' && fire[f+3]=='f')
           count++;
           else if(fire[f]=='c' && fire[f+1]=='f' && fire[f+2]=='h' && fire[f+3]=='e')
           count++;
           else if(fire[f]=='c' && fire[f+1]=='f' && fire[f+2]=='e' && fire[f+3]=='h')
           count++;

           else if(fire[f]=='h' && fire[f+1]=='c' && fire[f+2]=='e' && fire[f+3]=='f')
           count++;
           else if(fire[f]=='h' && fire[f+1]=='c' && fire[f+2]=='f' && fire[f+3]=='e')
           count++;
           else if(fire[f]=='h' && fire[f+1]=='e' && fire[f+2]=='c' && fire[f+3]=='f')
           count++;
           else if(fire[f]=='h' && fire[f+1]=='e' && fire[f+2]=='f' && fire[f+3]=='c')
           count++;
           else if(fire[f]=='h' && fire[f+1]=='f' && fire[f+2]=='e' && fire[f+3]=='c')
           count++;
           else if(fire[f]=='h' && fire[f+1]=='f' && fire[f+2]=='c' && fire[f+3]=='e')
           count++;

           else if(fire[f]=='e' && fire[f+1]=='h' && fire[f+2]=='c' && fire[f+3]=='f')
           count++;
           else if(fire[f]=='e' && fire[f+1]=='h' && fire[f+2]=='f' && fire[f+3]=='c')
           count++;
           else if(fire[f]=='e' && fire[f+1]=='c' && fire[f+2]=='h' && fire[f+3]=='f')
           count++;
           else if(fire[f]=='e' && fire[f+1]=='c' && fire[f+2]=='f' && fire[f+3]=='h')
           count++;
           else if(fire[f]=='e' && fire[f+1]=='f' && fire[f+2]=='h' && fire[f+3]=='c')
           count++;
           else if(fire[f]=='e' && fire[f+1]=='f' && fire[f+2]=='c' && fire[f+3]=='h')
           count++;

           else if(fire[f]=='f' && fire[f+1]=='h' && fire[f+2]=='e' && fire[f+3]=='c')
           count++;
           else if(fire[f]=='f' && fire[f+1]=='h' && fire[f+2]=='c' && fire[f+3]=='e')
           count++;
           else if(fire[f]=='f' && fire[f+1]=='e' && fire[f+2]=='c' && fire[f+3]=='h')
           count++;
           else if(fire[f]=='f' && fire[f+1]=='e' && fire[f+2]=='h' && fire[f+3]=='c')
           count++;
           else if(fire[f]=='f' && fire[f+1]=='c' && fire[f+2]=='e' && fire[f+3]=='h')
           count++;
           else if(fire[f]=='f' && fire[f+1]=='c' && fire[f+2]=='h' && fire[f+3]=='e')
           count++;
       }
       if(count>0)
       cout<<"lovely"<<" "<<count<<endl;
       else
       cout<<"normal"<<endl;
    }
    return 0;
}
