#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b||a==c||a==d){
            cout<<"YES"<<endl;
        }
        else if(a==b+c||a==b+d||a==c+d){
            cout<<"YES"<<endl;
        }
        else if(a==b+c+d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}