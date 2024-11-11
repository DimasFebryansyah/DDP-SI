#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nim;
    string nama;
    int total_sks;
    double IPK;
    int jumlah_sks_pilihan;
    int jumlah_sks_D;
    int jumlah_sks_E;
    int lama_lulus;

    cout << "Masukkan NIM: ";
    cin >> nim;
    cin.ignore();
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Total SKS: ";
    cin >> total_sks;
    cout << "Masukkan IPK: ";
    cin >> IPK;
    cout << "Masukkan Jumlah SKS Mata Kuliah Pilihan: ";
    cin >> jumlah_sks_pilihan;
    cout << "Masukkan Jumlah SKS Nilai D: ";
    cin >> jumlah_sks_D;
    cout << "Masukkan Jumlah SKS Nilai E: ";
    cin >> jumlah_sks_E;
    cout << "Masukkan Lama Lulus (semester): ";
    cin >> lama_lulus;

    int statusLulus = 0;

    if (IPK >= 2.25 && total_sks >= 144 && jumlah_sks_pilihan >= 15 && jumlah_sks_D <= 0.25 * total_sks && jumlah_sks_E == 0)
    {
        statusLulus = 1;
        if (IPK >= 3.51 && lama_lulus <= 8)
        {
            statusLulus = 2;
        }
        else if ((IPK >= 3.01 && IPK <= 3.50) || (IPK >= 3.51 && lama_lulus > 8))
        {
            statusLulus = 3;
        }
        else if (IPK >= 2.76 && IPK <= 3.00)
        {
            statusLulus = 4;
        }
    }

    switch (statusLulus)
    {
    case 0:
        cout << "Mahasiswa dinyatakan TIDAK LULUS\n";
        break;
    case 1:
        cout << "MAHASISWA DINYATAKAN LULUS\n\n";
        break;
    case 2:
        cout << "MAHASISWA DINYATAKAN LULUS\n\n";
        cout << "Dengan Pujian (Cumlaude)\n";
        cout << "Diusulkan mendapatkan Karya Cendikia\n";
        break;
    case 3:
        cout << "MAHASISWA DINYATAKAN LULUS\n\n";
        cout << "Sangat Memuaskan (Very Satisfactory)\n";
        break;
        break;
    case 4:
        cout << "MAHASISWA DINYATAKAN LULUS\n\n";
        cout << "Memuaskan (Satisfactory)\n";
        break;
    }

    return 0;
}
