#include <iostream>  
using namespace std;
void function(int n)  
{  
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
      int qwe[n]={0},k=0;
    for(int i=0;i<n;i++) {  
        for(int j=i+1;j<n;j++) {  
            if(arr[i]==arr[j]){  
                qwe[k]=arr[j];
            
                k++;  }
        }  
    }  
    for(int i=0;qwe[i]!=0;i++){
        cout<<qwe[i]<<" ";}
}  
int main(){
    int n;
    cin>>n;
    function(n);
}