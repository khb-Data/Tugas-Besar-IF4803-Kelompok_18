#include "pakaian.h"
#include "customer.h"
void deletePakaianFirst(ListPakaian &LP, adrPakaian &P){
    if (LP.first == nullptr) {
        cout << "List Pakaian Kosong. Tidak ada yang dihapus." << endl;
        P = nullptr;
        return;
    }

    P = LP.first;

    if (LP.first->next == nullptr) {
        LP.first = nullptr;
    }
    else {
        LP.first = P->next;
    }

    P->next = nullptr;

    cout << "Pakaian dengan ID " << P->idPakaian << " berhasil dihapus dari depan." << endl;
}


void deletePakaianLast(ListPakaian &LP, adrPakaian &P){
    adrPakaian last, prec;

    // 1. Cek jika List kosong
    if (LP.first == nullptr) {
        cout << "List Pakaian Kosong. Tidak ada yang dihapus." << endl;
        P = nullptr;
        return;
    }

    // 2. Kasus A: Hanya ada satu elemen di list
    if (LP.first->next == nullptr) {
        deletePakaianFirst(LP, P); // Gunakan prosedur deleteFirst
        return;
    }

    // 3. Kasus B: Lebih dari satu elemen
    last = LP.first;
    prec = nullptr; // Predecessor (node sebelum 'last')

    // Telusuri list hingga 'last' menunjuk ke node terakhir
    while (last->next != nullptr) {
        prec = last;
        last = last->next;
    }

    // 4. Node 'last' adalah node yang akan dihapus
    P = last;

    // 5. Hubungkan predecessor ke NULL (menjadikannya elemen terakhir baru)
    if (prec != nullptr) {
        prec->next = nullptr;
    }

    // 6. Putuskan hubungan node yang dihapus
    P->next = nullptr;

    cout << "Pakaian dengan ID " << P->idPakaian << " berhasil dihapus dari belakang." << endl;
}
void deletePakaianByID(ListPakaian &LP, string id){
    adrPakaian current, prec;

    // 1. Cari elemen yang akan dihapus
    current = findPakaian(LP, id);

    if (current == nullptr) {
        cout << "Pakaian dengan ID " << id << " TIDAK DITEMUKAN." << endl;
        P = nullptr;
        return;
    }

    // Node ditemukan, simpan alamatnya di P
    P = current;

    // 2. Kasus A: Elemen yang akan dihapus adalah elemen pertama
    if (current == LP.first) {
        deletePakaianFirst(LP, P);
        // Pesan deleteFirst sudah menangani output
        return;
    }

    // 3. Kasus B: Elemen yang akan dihapus berada di tengah atau di akhir

    // Cari Predecessor (node sebelum 'current')
    prec = LP.first;
    while (prec->next != current) {
        prec = prec->next;
    }

    // Hubungkan Predecessor ke elemen setelah 'current'
    prec->next = current->next;

    // 4. Putuskan hubungan node yang dihapus
    current->next = nullptr;

    cout << "Pakaian dengan ID " << id << " berhasil dihapus." << endl;
}


adrPakaian findPakaian(ListPakaian LP, string id){
    adrPakaian p = LP.first;

    // Telusuri list
    while (p != nullptr) {
        if (p->idPakaian == id) {
            // Ditemukan, kembalikan alamatnya
            return p;
        }
        p = p->next;
    }

    // Tidak ditemukan
    return nullptr;
}
