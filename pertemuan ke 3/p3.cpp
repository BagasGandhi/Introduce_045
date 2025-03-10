#include <iostream>
using namespace std;

float hitungRerata(int x, int y){
    return (x*y)/2;
}

string statusKelulusan(float a){
    if (a >= 75)
        return "lulus";
    else 
        return "Gagal";
}

int main(){ //begin
    //numeric nilai1, nilai2, rerata;
    int nilai1, nilai2;
    float rerata;
    //character status;
    string status;

// display "Masukkan nilai pertama: "
cout << "Masukkan nilai pertama:";
//accept nilai1
cin >> nilai1;
// display "Masukkan nilai kedua: "
cout >> "Masukkan nilai kedua: ";
//accept nilai2
cin >> nilai2;

// rerata = (nilai1+nilai2)/2;

//if (rerata >= 75)
//    status = "Lulus";
// else
//    status = "Gagal";

// display "status kelulusan =" + status;
cout << "Status kelulusan: " << statusKelulusan(hitungRerata(nilai1, nilai2));

}//end