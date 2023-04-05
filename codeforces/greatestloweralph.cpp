#include <bits/stdc++.h>
using namespace std;
int main (){
    long long t,n,x;
    string s;
    cin>>t;
    while (t--){
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        x=s[n-1]-'a';
        cout<<x+1<<endl;
        }
return 0;
}