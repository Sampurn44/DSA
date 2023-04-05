#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int a,b,c;
        cin>>a>>b>>c;
        if (a==b+c){
            cout<<"yes"<<endl;}
        else if(b==c+a){
            cout<<"yes"<<endl;
            }
            else if(c==b+a){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
    }
}