#include <iostream>
using namespace std;

struct DetailAlamat
{
    string kota;
    string provinsi;
};

struct Mahasiswa 
{
    string nama;
    string nim;
    DetailAlamat alamat;
};

int main()
{
    // membuat object dalam array
    Mahasiswa mhs[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Mahaiswa ke-" << i + 1 << endl;
        cout << "masukkan nim = "; 
        cin >> mhs[i].nim;
        cout << "Masukkan nama = ";
        cin >> mhs[i].nama;
        cout << "Masukkan kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukkan provinsi = ";
        cin >> mhs[i].alamat.provinsi;
    }
    
}
