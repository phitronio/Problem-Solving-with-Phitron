#include<bits/stdc++.h>
using namespace std ;



int main(){

    int n ; cin >> n ;

    int a[n] ;

    for(int i =0 ;i<n ;i++){
        cin >> a[i] ;
    }

    int min_ans = INT_MAX ;

    for(int i =0 ;i<n ;i++){

        if(a[i]<0){
            a[i] = a[i]* -1 ;
        }
      
        if(min_ans>a[i]){
            min_ans = a[i] ;
        }
    }

    cout << min_ans << endl ;



}