#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        string str;
        cin>>str;
        while(str.length()==3){
        if(str=="YES"||str=="Yes"||str=="yes"||str=="YEs"||str=="YeS"||str=="yeS"||str=="yES"||str=="yEs"){
    cout<<"YES"<<endl;
    break;
    }
    else{
        cout<<"NO"<<endl;
        break;
    }}
}}