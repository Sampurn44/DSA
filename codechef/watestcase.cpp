#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int t=101,a,q=0;
        cin>>a;
        int size[a],ans[a];
        for(int i=0;i<a;i++){
            cin>>size[i];
    }
    string strpf;
        cin>>strpf;
        
        for(int i=0;i<a;i++){
        if(strpf[i]=='0'){
           t=min(t,size[i]);
        }
        }
        cout<<t<<endl;

}}