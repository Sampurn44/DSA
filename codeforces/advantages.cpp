#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int a;
        cin>>a;
        vector<long long>b(a);
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        vector<long long>c=b;
        sort(b.begin(),b.end());
        long long maxi=b[a-1];
        long long mini=b[a-2];
        for(int i=0;i<a;i++){
            if ( c[i]==maxi){
                cout<<maxi-mini<<" ";
            }
            else{
                cout<<c[i]-maxi<<" ";
            }
        }
        cout<<endl;
    }
}