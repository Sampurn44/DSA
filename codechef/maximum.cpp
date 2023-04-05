#include<bits/stdc++.h>
using namespace std;

int main() {
int w;
cin>>w;
while(w--){
    int a,b,x;
    cin>>a>>b>>x;
    int c=max(a,b);
    int d=min(a,b);
    while(c>d){
        if(c>d){
            c=c-1;
            d=d+1;
        }
        }
    if(c==d){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}
	return 0;
}
