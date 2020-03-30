#include <iostream>
#include<string.h>

using namespace std;
int main(int argc, char** argv) {
    char kalimat[100];
    int banyak;
    cout << "Aplikasi Stack Untuk Membalikkan Kalimat" << endl;
    cout << "========================================" << endl;
    cout << "Masukkan Kalimat : ";
    cin >> kalimat;
    banyak=strlen(kalimat); //digunakan untuk menghitung banyak nya karakter
    //cout<<bnyk<<endl;

    for(int i=0;i<banyak;i++){
        if(kalimat[i]!=kalimat[banyak-1-i]){
            cout<<"Kalimat tersebut adalah non-Palindrom";
            i=banyak;
        }
        else{
        cout<<"Kalimat tersebut adalah Palindrom";
        i=banyak;
        }
    cout<<endl<<endl;
    cout<<"Kalimat setelah di balik "<<endl;
    for(banyak=strlen(kalimat)-1;banyak>=0;banyak=banyak-1){
        cout<<kalimat[banyak];

    }
    return 0;
}
}
