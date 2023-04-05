#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int w;
	cin>>w;
	while(w--){
	    int n,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){if (s[i]=='1'){count++;}else{break;}}
	
	    cout<<count<<endl;
	}
	return 0;
}
