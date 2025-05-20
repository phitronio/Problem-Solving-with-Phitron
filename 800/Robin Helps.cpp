#include<bits/stdc++.h>
using namespace std ;


int main(){

    int t ; cin >> t ;


    while(t--){

        int n , k ; cin >> n >> k ;

        int a[n] ;

        for(int i =0 ;i<n ;i++){
            cin >> a[i] ;
        }


        int cur_gold_ase =0 ;
        int help_korsi =0 ;

        for(int i =0 ; i<n ;i++){

            if(a[i]>=k){
                cur_gold_ase+=a[i] ;
            }
            else if(a[i]==0){
                if(cur_gold_ase>0){
                    help_korsi++ ;
                    cur_gold_ase-- ;
                }
            }

        }

        cout << help_korsi << endl ;









    }




}



