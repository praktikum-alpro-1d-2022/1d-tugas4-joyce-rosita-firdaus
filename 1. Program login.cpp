#include <iostream>
using namespace std;
int main (){

    string username, password;

    cout << "Masukkan Username : ";
    cin >> username;
    cout << "Masukkan Password : ";
    cin >> password;

    if (username == "@yawnzzn" && password == "txtyanto"){
        cout << "Username dan Password sesuai, Login berhasil.";
    } else if (username == "@yawnzzn" && password != "txtyanto"){
        cout << "Username sesuai, Password tidak sesuai!";
    } else if (username != "@yawnzzn" && password == "txtyanto"){
        cout << "Username tidak sesuai, Password sesuai!";
    } else {
        cout << "Username dan Password tidak sesuai!";
    }
    return 0;
}
