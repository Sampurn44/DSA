#include<bits/stdc++.h>
using namespace std;
#define int long long
void happy() {
   int sampurn[100000];
   bool nice=false;
   int size,qwe;
   cin>>size;
   for(int i=1;i<=size;++i)
      cin>>sampurn[i];
   for(int i=2;i<=size;++i)
      if(sampurn[i]>sampurn[1]) {
         nice=true;
         qwe=i;
         break;
      }
   if(!nice) {
      puts("-1");
      return;
   }
   cout<<qwe-1<<endl;
   for(int i=1;i<qwe;++i)
      cout<<sampurn[i]<< ' ';
   cout<<endl<<size-qwe+1<<endl;
   for(int i=qwe;i<=size;++i)
      cout<<sampurn[i]<<' ';
   cout<<endl;
}
signed main() {
   int w;
   cin>>w;
   while(w--){ 
    happy();
}}