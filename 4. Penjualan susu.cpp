#include <iostream>
using namespace std;
int main(){

    int kode;
    char ukuran;
    float jumlah, B1, S1, K1, B2, S2, K2, B3, S3, K3;
    B1 = 10000;
    S1 = 4250;
    K1 = 2100;
    B2 = 8500;
    S2 = 4000;
    K2 = 2025;
    B3 = 17000;
    S3 = 14500;
    K3 = 8300;

    cout << "                   DAFTAR HARGA PRODUK SUSU                     " << endl;
    cout << "________________________________________________________________" << endl;
    cout << "| Kode Susu    | Nama Produk   | Ukuran        | Harga         |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;
    cout << "| 1            | Dancow        | B = Besar     | Rp. 10.000,-  |" << endl;
    cout << "|              |               | S = Sedang    | Rp. 4.250,-   |" << endl;
    cout << "|              |               | K = Kecil     | Rp. 2.100,-   |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;
    cout << "| 2            | Indomilk      | B = Besar     | Rp. 8.500,-   |" << endl;
    cout << "|              |               | S = Sedang    | Rp. 4.000,-   |" << endl;
    cout << "|              |               | K = Kecil     | Rp. 2.025,-   |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;
    cout << "| 3            | Sustacal      | B = Besar     | Rp. 17.000,-  |" << endl;
    cout << "|              |               | S = Sedang    | Rp. 14.500,-  |" << endl;
    cout << "|              |               | K = Kecil     | Rp. 8.300,-   |" << endl;
    cout << "|______________|_______________|_______________|_______________|" << endl;

    cout << "" << endl;

    cout << "Masukkan Kode Susu (1-3) : ";
    cin >> kode;
    cout << "Masukkan Jumlah Pembelian : ";
    cin >> jumlah;
    cout << "Masukkan Ukuran : ";
    cin >> ukuran;

    cout << "" << endl;

    if (kode == 1 && ukuran == 'B'){
        cout << "Susu Dancow \nHarga Susu Rp. " << B1 << ",- \nJumlah Pembelian Rp. " << jumlah * B1 << ",-";
    } else if (kode == 1 && ukuran == 'S'){
        cout << "Susu Dancow \nHarga Susu Rp. " << S1 << ",- \nJumlah Pembelian Rp. " << jumlah * S1 << ",-";
    } else if (kode == 1 && ukuran == 'K'){
        cout << "Susu Dancow \nHarga Susu Rp. " << K1 << ",- \nJumlah Pembelian Rp. " << jumlah * K1 << ",-";
    } else if (kode == 2 && ukuran == 'B'){
        cout << "Susu Indomilk \nHarga Susu Rp. " << B2 << ",- \nJumlah Pembelian Rp. " << jumlah * B2 << ",-";
    } else if (kode == 2 && ukuran == 'S'){
        cout << "Susu Indomilk \nHarga Susu Rp. " << S2 << ",- \nJumlah Pembelian Rp. " << jumlah * S2 << ",-";
    } else if (kode == 2 && ukuran == 'K'){
        cout << "Susu Indomilk \nHarga Susu Rp. " << K2 << ",- \nJumlah Pembelian Rp. " << jumlah * K2 << ",-";
    } else if (kode == 3 && ukuran == 'B'){
        cout << "Susu Sustacal \nHarga Susu Rp. " << B3 << ",- \nJumlah Pembelian Rp. " << jumlah * B3 << ",-";
    } else if (kode == 3 && ukuran == 'S'){
        cout << "Susu Sustacal \nHarga Susu Rp. " << S3 << ",- \nJumlah Pembelian Rp. " << jumlah * S3 << ",-";
    } else if (kode == 3 && ukuran == 'K'){
        cout << "Susu Sustacal \nHarga Susu Rp. " << K3 << ",- \nJumlah Pembelian Rp. " << jumlah * K3 << ",-";
    } else {
        cout << "Menu yang anda pilih tidak ada.";
    }

    return 0;
}
