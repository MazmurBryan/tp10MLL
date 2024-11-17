#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
#define first(l) l.first
#define info(p) p->info
#define next(p) p->next


using namespace std;

struct jadwalPenerbangan{

    string kode,jenis,tanggal,waktu,asal,tujuan;
    int kapasitas;


};

typedef struct elemenJadwal *adr_jadwalP;

typedef jadwalPenerbangan infotype;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;

};
struct listJadwal {
    adr_jadwalP first;

};

void createListJadwal_103012300001(listJadwal &l);
adr_jadwalP createElemenJadwal_103012300001(infotype x);

void insertLastJ_103012300001(listJadwal &l, adr_jadwalP p);
void showJadwal_103012300001(listJadwal l);
void deleteFirstJ_103012300001(listJadwal &l, adr_jadwalP &p);
bool searchJ(listJadwal l, string dari, string ke, string tanggal);


#endif // FLIGHT_H_INCLUDED
