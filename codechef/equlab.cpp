#include <iostream>
using namespace std;

int main() {    
    int w;
    cin>>w;
    while(w--){
        long long c;
        cin>>c;
        long long a[c],b[c],d[c];
        for(int i=0;i<c;i++){
            cin>>a[i];
        }
        for(int i=0;i<c;i++){
            cin>>b[i];
        }
        long long z=0,sum=0;
        for(int i=0;i<c;i++){
            d[i]=a[i]-b[i];
            sum+=d[i];
            if(d[i]>0){
                z+=d[i];
            }
        }
        if(sum==0){
            cout<<z<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
	return 0;
}
