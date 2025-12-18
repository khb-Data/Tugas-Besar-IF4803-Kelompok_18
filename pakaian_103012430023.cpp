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

    current = findPakaian(LP, id);

    if (current == nullptr) {
        cout << "Pakaian dengan ID " << id << " TIDAK DITEMUKAN." << endl;
        return;
    }

    // Jika elemen pertama
    if (current == LP.first) {
        adrPakaian temp;
        deletePakaianFirst(LP, temp);
        return;
    }

    // Cari predecessor
    prec = LP.first;
    while (prec != nullptr && prec->next != current) {
        prec = prec->next;
    }

    if (prec != nullptr) {
        prec->next = current->next;
        current->next = nullptr;
        cout << "Pakaian dengan ID " << id << " berhasil dihapus." << endl;
    }
}
