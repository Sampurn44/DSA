#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        long long a;
        cin>>a;
        long long e,o;
        o=e=a/2;
        if(a%2!=0){
            o++;
        }
        cout<<2*o*e<<endl;
    }
}