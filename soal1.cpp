#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Masukkan kode : ";
    cin >> n;
    if( n <= 0 ){
        cout << "Bukan";
        return 0;
    }
    while( n % 2 == 0 ){
        n /= 2 ;
    } if ( n ==1 )
    cout << "Ya";
    else 
    cout << "Bukan";
}