#include<bits/stdc++.h>
using namespace std ;

using ll = long long ;




void solve(){

    int n ; cin >> n ;

    int a[n] ;

    for(int i =0 ;i<n ;i++){
        cin >> a[i] ;
    }

    bool has_another = false ;

    int start_index = -1 ;


    for(int i =0 ;i<n ;i++){
        if(a[i]!=0){
            if(has_another==false){
                start_index = i ;
            }
            has_another = true ;

        }
    }



    if(has_another==false){
        cout << 0 << endl ;
    }
    else{

        bool zero_paisi = false ;

        bool flag = true ; // 1 ta operation diye kora jabe 



        for(int i =start_index ; i < n ;i++){

            if(a[i]==0){
                zero_paisi = true ;
            }

            if(zero_paisi == true && a[i]!=0){
                flag = false ;

            }

        }

        if(flag==1){ // 1 is considered as true 
            cout << 1 << endl ;
        }
        else cout << 2 << endl ;



    }








    



}






int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL) ;

    int t ; cin >> t ;
    


    while(t--){
        solve() ;
    }




}



