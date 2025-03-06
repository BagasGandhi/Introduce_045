#include <iostream>  
using namespace std; 

int main()
{ //begin
    //numeric luas, panjang, lebar 
    double luas;
    double panjang;
    double lebar; //declare var local

    //display "Masukkan panjangnya"
    cout << "Masukkan panjangnya:";
    //accept panjang
    cin >> panjang;
    //display "Masukkan lebarnya"
    cout << "Masukkan lebarnya:";
    //accept lebar 
    cin >> lebar;

    // compute luas = panjang *lebar
    luas = panjang * lebar; 

    // display 'Luas Persegi Panjang', luas 
    cout << "Luas persegi panjang:" << luas << endl;

}