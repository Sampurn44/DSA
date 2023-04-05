#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    for(int j=0;j<w;j++){
    int n;
    bool NO= true;
    cin>>n;
    for(int i=1; i*i<n; i++){
        if((n-2*i)%(i+2)==0&&n!=2*i){
            cout<<"YES"<<endl;
            NO=false;
            break;
        }
    }
    if(NO){
        cout<<"NO"<<endl;
    }
}
}