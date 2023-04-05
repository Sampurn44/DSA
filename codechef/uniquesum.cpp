#include <bits/stdc++.h>
using namespace std;


long long minUniqSum( int N, int K, vector<long long> nums){
while(K--){
sort(nums.begin(), nums.end());
int a=nums.back();
nums.pop_back();
nums.push_back(a/2);
nums.push_back(a/2);
}
{
    int n = nums.size();
    int sum = 0;
    unordered_set<int> hash_table;
    for (int i = 0; i < n; i++)
    {
        if (hash_table.count(nums[i]) == 0) 
        {
            hash_table.insert(nums[i]);
            sum += nums[i];
        }
    }
    return sum;}
}
int main(){
    int t;
    cin>>t;
    for(int t_i=0;t_i<t;t_i++){
    int N;
    cin>>N;
    int K;
    cin>>K;
    vector<long long> nums(N);
    for(int i_nums=0;i_nums<N;i_nums++){
        cin>>nums[i_nums];
    }
    long long out_;
    out_=minUniqSum(N,K,nums);
    cout<<out_;
    cout<<"\n";
}}