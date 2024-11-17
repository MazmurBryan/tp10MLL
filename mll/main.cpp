#include "flight.h"
#include <iostream>

using namespace std;

int main()
{
    listJadwal l;
    infotype jadwal;
    int n;
    createListJadwal_103012300001(l);
     cout << "Masukkan jumlah jadwal penerbangan: ";
    cin >>n;
    for (int i=0;i<n;i++){
        cout << "\nJadwal Penerbangan ke-" << i+1 << endl;
        cout << "Kode: "; cin >> jadwal.kode;
        cout << "Jenis: "; cin >> jadwal.jenis;
        cout << "Tanggal: "; cin.ignore();getline(cin,jadwal.tanggal);
        cout << "Waktu: "; cin >> jadwal.waktu;
        cout << "Asal: "; cin >> jadwal.asal;
        cout << "Tujuan: "; cin >> jadwal.tujuan;
        cout << "Kapasitas: "; cin >> jadwal.kapasitas;
        adr_jadwalP p = createElemenJadwal_103012300001(jadwal);
        insertLastJ_103012300001(l,p);

    }
    cout << endl;
    cout << "---Jadwal Penerbangan--" << endl;
    showJadwal_103012300001(l);

    cout << "--Jadwal Penerbangan Setelah Hapus Jadwal Penerbangan Pertama--"<<endl;
    adr_jadwalP x;
    deleteFirstJ_103012300001(l,x);
    showJadwal_103012300001(l);
    cout << endl;

    cout << "-Cari Jadwal-" << endl;

    string dari,ke,tanggal;

     cout << "Dari : "; cin >> dari;
     cout << "Ke : "; cin >> ke;
     cout << "Tanggal : "; cin.ignore();getline(cin,tanggal);


    bool find =searchJ(l,dari,ke,tanggal);
    if (find == true){
        cout << "Jadwal Di Temukan";
    }else{
        cout << "Jadwal Tidak Temukan";
    }
    return 0;
}
