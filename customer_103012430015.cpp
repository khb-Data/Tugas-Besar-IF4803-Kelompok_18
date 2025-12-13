#include "customer.h"
#include "pakaian.h"
#include <iostream>
using namespace std;

void insertCustomerLast(ListCustomer &LC, adrCustomer C){
    if (isEmptyCustomer(LC)){
        LC.first = C;
        LC.last = C;
    }else {
        C->prev = LC.last;
        LC.last->next = C;
        LC.last = C;
    }
}

void insertCustomerSorted(ListCustomer &LC, adrCustomer C){
    if (LC.first == nullptr || C->idCustomer < LC.first->idCustomer) {
        C->next = LC.first;
        LC.first = C;
        cout << "Customer dengan ID " << C->idCustomer << " berhasil ditambahkan di depan (terurut)." << endl;
        return;
    }

    adrCustomer p = LC.first;
    adrCustomer q = LC.first->next;
    
    while (q != nullptr && C->idCustomer > q->idCustomer) {
        p = q;
        q = q->next;
    }
    
    C->next = q;
    p->next = C;
    
    cout << "Customer dengan ID " << C->idCustomer << " berhasil ditambahkan secara terurut." << endl;
}

void showAllCustomer(ListCustomer LC){
    if (LP.first == nullptr) {
        cout << "--- List Pakaian KOSONG ---" << endl;
        return;
    }

    adrPakaian p = LP.first;

    cout << "\n=== Daftar Seluruh Pakaian ===" << endl;
    
    while (p != nullptr) {
        cout << "Pakaian ID : " << p->idPakaian << endl;
        cout << "  Jenis    : " << p->jenis << endl;
        cout << "  Berat    : " << p->berat << " kg" << endl;
        cout << "---------------------------------" << endl;
        
        p = p->next;
    }
    cout << "=== Akhir Daftar Pakaian ===\n" << endl;
}
