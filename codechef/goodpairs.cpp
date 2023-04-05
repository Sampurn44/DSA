#include <iostream>
using namespace std;
long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
    int w;
    cin>>w;
    while(w--){
	long long size,count=0;
    cin>>size;
    long long arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
    if(gcd(arr[i],arr[i+1])==lcm(arr[i],arr[i+1])){
        count++;
    }
    	}	
        cout<<count<<endl;}
	return 0;
}
