#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int n;
        cin>>n;
        long long intresting[n];
        for(int i=0; i<n; i++){ cin>>intresting[i] ;}
        sort(intresting,intresting+n);
        long long qwe= -1e10;
        long long asd= 1e10;
        qwe=max(intresting[0]*intresting[0],intresting[n-1]*intresting[n-1]);
        if((intresting[0]<0) && (intresting[n-1]>0)){
        asd=intresting[0]*intresting[n-1];
        }
        else{
        for(int i=0; i<n; i++){ 
            asd=min(asd,intresting[i]*intresting[i]);
        }
}
cout<<asd<<" "<<qwe<<endl;
}}