#include<bits/stdc++.h>
#define int long long
using namespace std;

void happy() {
   int first[100000],second[100000];
   int si,qwe;
   cin>>si;
   for(int j=1;j<=si;++j) {
    cin>>first[j];
   }
   cin>>qwe;
   for(int j=1;j<=qwe;++j) {
    cin>>second[j];
    }
   int asd=0;
   for(int j=1,zxc=0;j<=si;++j) {
      zxc+=first[j];
      asd=max(asd,zxc);
   }
   for(int j=siz,zxc=0;j>=0;--j) {
      zxc+=first[j];
      asd=max(asd,zxc);
   }
   for(int j=1;j<=qwe;++j)
      if(second[j]>=0) {
        asd+=second[j];
        }
   cout<<asd<<endl;
}
signed main() {
   int w;
   cin>>w;
   while(w--) {
    happy();
    }
}
