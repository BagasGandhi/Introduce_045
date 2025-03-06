#include <iostream>  
using namespace std; 

float luas, panjang, lebar; //var global

void inputData(){
    cout << "Masukkan panjangnya:";
    cin >> panjang;
    cout << "Masukkan lebarnya:"; 
    cin >> lebar;
}

float hitungLuas(){
    luas = panjang * lebar;
    return luas; 
}

float hitungLuasBerparameter(float a, float b){
    luas = a * b;
    return luas;
}

void tampilkanLuas()
{
    cout << "Luas persegi panjang" << luas << endl;
}

int main()
{
    inputData();
    hitungLuas();
    tampilkanLuas();
}