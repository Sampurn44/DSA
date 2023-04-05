#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int a,b,c;
        cin>>a>>b>>c;
        if ((a < b && b < c) || (c < b && b < a)){
       cout<<b<<endl;}
        else if ((b < a && a < c) || (c < a && a < b)){
       cout<<a<<endl;}
        else{
       cout<<c<<endl;}
    }
}