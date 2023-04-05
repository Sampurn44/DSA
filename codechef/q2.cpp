#include"bits/stdc++.h"
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        long n; cin>>n;
        if(n==2){cout<<"2 "<<"1"<<endl;}
        else if(n==3){cout<<"-1"<<endl;}
        else{
            if(n%2){
                int mid=(n/2)+1;
                for(int i=n;i>mid;i--){cout<<i<<" ";}
                for(int i=1;i<=mid;i++){cout<<i<<" ";}
                    cout<<endl;

            }
            else{
                for(int i=n;i>=1;i--){cout<<i<<" ";}
                    cout<<endl;
            }

        }
    }
}