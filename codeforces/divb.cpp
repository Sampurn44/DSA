#include <bits/stdc++.h>
using namespace std;
void answer(){
    int n;
    cin>>n;
    int dev[n];
    for(int i=0; i < n; i++){
        cin>>dev[i];

    }
    set<int>ved;
    for(int i=0; i < n; i++){
        ved.insert(dev[i]);
    }
    if(ved.size() == n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int s;
    cin>>s;
    while(s--){answer();}
    return 0;
}