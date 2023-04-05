#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int w;
    cin>>w;
    while(w--){
        int  a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES"<<endl;
            continue;
        }
       else if(a>b){
            while(b<a){
                b*=2;
            }
        }
        else{
            while(b>a){
            a*=2;
            }
        }
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
