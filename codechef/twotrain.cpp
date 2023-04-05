#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int n,i,d,sum=0;
        cin>>n;
        int a[n],b[n];
        a[0]=0;
        b[0]=0;
        for(int i=1;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        b[i]=a[i];
        a[i]=sum;
        }
        for( i=0;i<n-1;i++){
        d=a[i+1]-b[i];
        if(d>0){
            b[i+1]=b[i]+d+b[i+1];
        }
        else{
            b[i+1]=b[i]+b[i+1];
        }
    
        }cout<<b[i]<<endl;
   

    }
}