#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        long long n;
        cin>>n;
        long long ar[n];
        long long a,b,c;
        a=b=c=0;
        for(long long i=1;i<=n;i++){
            cin>>ar[i];
            a+=ar[i]==0;
            b+=ar[i]==1;
        }
        for(long long i=1;i<=n;i++){
            if(i==1){
                c+=(ar[1]==ar[n]);
            }
            else{
                c+=ar[i]==ar[i-1];
            }}
            c-= abs(a-b);
            cout<<(c%4==0?"Bob":"Alice")<<endl;
        
    }
}