#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        long long n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=1;
        for(int i=0;i<n-1 && flag==1;i++){
            if(arr[i]<arr[i+1]){
                flag=0;
            while(arr[i+1]>=arr[i] && i<n-1){
                i++;
            }
            if(i==n-1){cout<<"Yes"<<endl; break;}
            else{cout<<"No"<<endl;}
        }}
        if (flag==1){cout<<"Yes"<<endl;
    }
    }
}