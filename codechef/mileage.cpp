#include <iostream>
using namespace std;

int main() {
	int w;
	cin>>w;
	while(w--){
	    float n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    float p,d;
	    p=((n/a)*x);
	    d=((n/b)*y);
	    if(p==d){
	        cout<<"ANY"<<endl;
	    }
	    else if(p>d){
	        cout<<"DIESEL"<<endl;
	    }
	    else{
	        cout<<"PETROL"<<endl;
	    }
	}
	return 0;
}
