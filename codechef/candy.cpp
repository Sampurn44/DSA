#include <iostream>
using namespace std;

int main() {
	int w,a,b,c,d;
	cin>>w;
	while(w--){
	    cin>>a>>b;
	    c=a%b;
	    d=a/b;
	    if(c==0){
	        if(d%2==0){
	            cout<<"Yes"<<endl;
	        }
            else{
                cout<<"No"<<endl;
            }
	    }
	    else{
	        cout<<"No"<<endl;
	    } 
	}
	return 0;
}
