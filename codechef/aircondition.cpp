#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<=b && b>=c){
            cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
}