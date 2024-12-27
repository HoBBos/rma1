#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    /*  
    *****
    *****
    *****
    *****
    *****
    for (int i = 0; i < n; i++){
     for (int j = 0; j < n; j++){
        cout<<"*";
     }
     cout<<endl;
   }  */

    /*  
    *
    **
    ***
    ****
   for (int i = 0 ; i < n; i++){
        for (int j = 0 ; j < i; j++){
            cout<<"* ";
        }
        cout<<endl;
    } */
 
   /* 
        *****
        ****
        ***
        **
        *
     for (int i = 0; i < n; i++){
    for (int j = 0; j < n-i+1; j++){
        cout<<"*";
    }
    cout<<endl;
   } */


    /* 
    1
    1 2
    1 2 3
    for (int red = 1; red <= n; red++){
        for (int kolona = 1; kolona <= red; kolona++){
            cout<<kolona<<" ";
        }
        cout<<endl;
    } */


   for (int i = 0; i < n * 2; i++){
    int pom = i > n ? 2 * n - i : i;
    for (int j = 0; j < pom; j++){
        cout<<"* ";
    }
    cout<<endl;
   }
}