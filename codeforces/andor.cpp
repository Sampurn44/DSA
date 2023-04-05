#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    while(w--)
    {
       int size,powerintial;
       cin>>size>>powerintial;
       int health[size],pow[size];
       for(int i=0;i<size;i++)
       {
       cin>>health[i]; 
       }
       for(int i=0;i<size;i++)
       {
        cin>>pow[i]; 
        }
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> hello;
       for(int i=0;i<size;i++)
       {
        hello.push({pow[i],health[i]});
       }
       int x=0;
       while(!hello.empty() && powerintial>0)
       {
           auto it = hello.top();
           hello.pop();
           int health = it.second;
           int power = it.first;
            x += powerintial;
            if(health >= x)
            {
               powerintial -= power;
               hello.push({power,health});
            }
       }
       if(hello.empty())
       cout<<"YES"<<endl;
       else if(powerintial<=0)
       cout<<"NO"<<endl;
    }
    return 0;
}