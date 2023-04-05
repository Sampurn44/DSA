#include "bits/stdc++.h"
using namespace std;
int a=1,b=1;
int solve(vector<int>&A,vector <int>&B,vector<int>&C){
    int n=A.size();
    int count=0;
    for(int i=0;i<n;i++){
        while(C[i]--){
            if(a>=A[i+1]){b=b+1;}
            else{a=a+1;}}
        if(a<A[i+1] || b<B[i+1]){cout<<a<<"  "<<b<<endl;return count+1;}
        else{cout<<a<<"  "<<b<<endl;count++;}
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){cin>>b[i];}
    for(int i=0;i<n;i++){cin>>c[i];}
    cout<<solve(a,b,c);

}