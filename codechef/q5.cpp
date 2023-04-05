#include<bits/stdc++.h>
    using namespace std;
    int main(){
        long w; 
        cin>>w;
        while(w--){
            int size;
            cin>>size;
            int a[size];
            for(int i=0;i<size;i++){cin>>a[i];}
                string s;
            cin>>s;
            pair<string , int>p[size];
            for(int i=0;i<size;i++){
                p[i].first=s[i];
                p[i].second=a[i];
            }
            int count=0;
            for(int i=0;i<size;i++){
                for(int j=i+1;j<size;j++){
                    if(p[i].second==p[j].second){
                        if(p[i].first!=p[j].first){count++;}
                    }
                }
            }
            if(count==0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }