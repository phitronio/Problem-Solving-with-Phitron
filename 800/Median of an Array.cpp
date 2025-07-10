#include<bits/stdc++.h>
using namespace std ;

using ll = long long ;




void solve(){

    int n ; cin >> n ;

    int a[n] ;


    for(int i =0 ;i<n ;i++){
        cin >> a[i] ;
    }

    sort(a,a+n) ;

    int median_point = n/2 ;

    if(n%2!=0){
        median_point++ ;
    }

    int index = median_point-1 ;

    int need = a[index] +1 ;

    int operation = 0 ;


    for(int i = index ; i< n ;i++){

        if(need > a[i]){
            operation += ( need - a[i]) ;
        }

    }

    cout << operation << endl ;







    




}






int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL) ;

    int t ; cin >> t ;
    


    while(t--){
        solve() ;
    }




}



