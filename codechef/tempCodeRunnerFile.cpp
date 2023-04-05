#include <iostream>
#include <string>
using namespace std;

string Solve(string s1, string s2) {
    string result1="No";
    string result2="Yes";
    if (s1.length() != s2.length()){ 
        return result1;
        }
    if (s1 == s2) {
        return result2;
        }
    for (int i = 0; i < s1.length(); i++) {
        string a = s1.substr(i) + s1.substr(0, i);
        if (a == s2) {
            return result2;
            }
    }
    return result1;
}

int main() {
    string s1,s2 ;
    cin>>s1;
    cin>>s2;
    
    cout<<Solve(s1, s2)<<endl;
     
    return 0;
}
