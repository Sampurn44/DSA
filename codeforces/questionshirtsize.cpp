#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    string dev,ved;
    cin>>dev>>ved;
    int n=dev.length();
    int s=ved.length();
    int asd1=0,asd2=0;
    for(int i=0,j=0;i<n,j<s;i++,j++){
      if(dev[i]=='X')
        asd1++;
      if(ved[j]=='X')
        asd2++;
        }
    if(dev[n-1]=='S' && ved[s-1]=='M'){
      cout<<"<"<<endl;
      }
    else if(dev[n-1]=='S' && ved[s-1]=='L'){
      cout<<"<"<<endl;
      }
    else if(dev[n-1]=='M' && ved[s-1]=='L'){
      cout<<"<"<<endl;
      }
    else if(dev[n-1]=='L' && ved[s-1]=='S'){
      cout<<">"<<endl;
      }
    else if(dev[n-1]=='L' && ved[s-1]=='M'){
      cout<<">"<<endl;}
    else if(dev[n-1]=='M' && ved[s-1]=='S'){
      cout<<">"<<endl;}
    else{
      if(dev[n-1]=='S'){
      if(asd1==asd2){
        cout<<"="<<endl;}
      else if(asd1>asd2){
        cout<<"<"<<endl;}
      else{
        cout<<">"<<endl;}
      }
      else{
        if(asd1==asd2){
          cout<<"="<<endl;}
        else if(asd1>asd2){
        cout<<">"<<endl;}
        else{
        cout<<"<"<<endl;}
      }
    }
  }
  return 0;
}