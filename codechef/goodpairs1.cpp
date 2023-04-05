#include<bits/stdc++.h>
using namespace std ;
void solve ( ) {
    int n ; cin >> n ;
    int arr [ n ] ;
    int res = 0 ;

    unordered_map <int,int>mp ;
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> arr [ i ] ;
        mp [ arr [ i ] ] ++ ;
   }
    for ( auto it : mp ) {
        if ( it.second > 1 ) {
            int t=it.second;
            res+=t*( t - 1 ) / 2 ;
   }
       }
    cout << res << endl ;
}
int main ( ) {
    int t ; cin >> t ;
   while ( t-- ) {
       solve ( ) ;
}
   
    return 0 ;
}