#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string alamat;
};

int main()
{
    // membuat object struct dalam array
    Mahasiswa mhs[4];
    for (int i = 0; i< 4; i++)
    {
        cout << "Mahaiswa ke-" << i + 1 << endl;
        cout << "masukkan nim = "; 
        cin >> mhs[i].nim;
        cout << "Masukkan nama = ";
        cin >> mhs[i].nama;
        cout << "Masukkan alamat = ";
        cin >> mhs[i].alamat;
    }
    cout << endl;
    cout << "Menampilkan Data" << endl;
    cout << endl;
    for (int i = 0; i< 4; i++)
    {
        cout << "Mahaiswa ke-" << i + 1 << endl; 
        cin >> mhs[i].nim;
        cin >> mhs[i].nama;
        cin >> mhs[i].alamat;
    }
}