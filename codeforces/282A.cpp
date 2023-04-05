#include<iostream>
using namespace std;
int main(){
    int w,x=0;
    cin>>w;
    while(w--){
        string str;
        cin>>str;
        if(str=="++X"||str=="X++"){
            x=x+1;
        }
        else if(str=="--X"||str=="X--"){
            x=x-1;
    }}
    cout<<x<<endl;
}