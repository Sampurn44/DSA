#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void qwert(ll c, ll d){
    ll temp=0,temp1=0,count=0;
while(count<1000){
	        if(c==d){cout<<"YES"<<endl;
	            continue;
	        }
	        else{d=d*d;}
	        temp=c;
	        temp1=d;
	        c=max(temp,temp1);
	        d=min(temp,temp1);
	    count++;}
	    cout<<"No"<<endl;}
int main() {
	ll w;
	cin>>w;
	while(w--){
	ll a,b;
	    cin>>a>>b;
	    ll c,d;
	    c=max(a,b);
	    d=min(a,b);
	    qwert(c,d);
	}
	return 0;
}
