#include<iostream>
using namespace std;
int hi(int a,int b){
if(b==0){return a;}
return hi(b,a%b);
}
int main(){
    int w;
    cin >> w;
    while(w--){
        long long n,a,b;
        cin>> n >> a ;
        for(int i=1;i<n;i++){
        cin>>b;
        a=hi(a,b);
        }
        cout<<a*n<<endl;
    }
}