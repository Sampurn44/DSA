#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       if (a==b && b==c && c==a)
       {
        cout<<"YES"<<endl;
        continue;
       }
       else if (a>b && b>c)
       {
        cout<<"NO"<<endl;
        continue;
       }
       else if (a==b && c>b)
       {
        cout<<"YES"<<endl;
        continue;
       }
       else if (b==c && a>c)
       {
        cout<<"YES"<<endl;
        continue;
       }
       else if (c==a && b>a)
       {
       cout<<"YES"<<endl;
       continue;
       }
       
       
       
       
       else
       {
        cout<<"NO"<<endl;
        continue;
       }
       
        

    }
    
    return 0;
}