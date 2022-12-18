#include <iostream>
using namespace std;
int main (){

    int tahun;

    cout << "Memeriksa Tahun Kabisat" << endl;
    cout << "Masukkan Tahun : ";
    cin >> tahun;

    if (tahun % 400 == 0){
        cout << tahun << " merupakan tahun kabisat.";
    } else if (tahun % 100 == 0){
        cout << tahun << " bukan merupakan tahun kabisat.";
    } else if (tahun % 4 == 0){
        cout << tahun << " merupakan tahun kabisat.";
    } else {
        cout << tahun << " bukan merupakan tahun kabisat.";
    }
    return 0;
}
