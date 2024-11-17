#include "flight.h"
void createListJadwal_103012300001(listJadwal &l){
    first(l)=NULL;


}
adr_jadwalP createElemenJadwal_103012300001(infotype x){
    adr_jadwalP p = new elemenJadwal;
    info(p) = x;
    next(p) = NULL;
    return p;

}

void insertLastJ_103012300001(listJadwal &l, adr_jadwalP p){
    if (first(l)==NULL){
        first(l)=p;
    }else{
        adr_jadwalP x = first(l);
        while(next(x)!=NULL){
                x = next(x);


        }
        next(x)=p;

    }

}
void showJadwal_103012300001(listJadwal l){
    if (first(l)==NULL){
        cout << "List Kosong";
    }else{
        adr_jadwalP p = first(l);
        while(p!=NULL){
                cout << info(p).kode << " " << info(p).jenis << " " <<info(p).tanggal<< " " <<info(p).waktu<< " " <<info(p).asal<< " " << info(p).tujuan << endl;
                p = next(p);


        }
    }


}
void deleteFirstJ_103012300001(listJadwal &l, adr_jadwalP &p){
    if (first(l)==NULL){
            cout << "List Kosong";


    }else if(next(first(l))==NULL){
        p = first(l);
        first(l)=NULL;

    }else{
        p = first(l);
        first(l)=next(p);
        next(p)= NULL;

    }

}
bool searchJ(listJadwal l, string dari, string ke, string tanggal){
    adr_jadwalP x = first(l);

    while(x!=NULL){

        if (info(x).asal == dari && info(x).tujuan == ke && info(x).tanggal == tanggal){

            return true;
        }
        x = next(x);
    }

    return false;

}

