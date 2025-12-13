#include "pakaian.h"
#include "customer.h"
#include <iostream>
using namespace std;

adrPakaian findPakaian(ListPakaian LP, string id){
    adrPakaian = p;
    p = LP.first;
    while (p->info.id != id && p != nullptr){
        p = p->next;
    }
    return p;
}

void showAllPakaian(ListPakaian LP){
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


void showAllPakaianUnique(ListCustomer LC){
    if (LC.first == nullptr) {
        cout << "--- List Customer KOSONG, tidak ada pakaian untuk ditampilkan ---" << endl;
        return;
    }

    adrCustomer c = LC.first;
    int customerCount = 1;
    int totalPakaian = 0;

    cout << "\n=== Daftar Seluruh Pakaian dari Semua Customer ===" << endl;

    while (c != nullptr) {
        cout << "--------------------------------------------------------" << endl;
        cout << "CUSTOMER " << customerCount << ": ID " << c->idCustomer << endl;
        cout << "--------------------------------------------------------" << endl;

        ListPakaian customerLP = c->listPakaian;

        if (customerLP.first == nullptr) {
            cout << "   (Customer ini tidak memiliki pakaian terdaftar)" << endl;
        } else {
            adrPakaian p = customerLP.first;
            int pakaianCount = 1;
            while (p != nullptr) {
                cout << "   " << pakaianCount << ". Pakaian [" << p->idPakaian << "]" << endl;
                cout << "      Jenis: " << p->jenis << endl;
                cout << "      Berat: " << p->berat << " kg" << endl;

                p = p->next;
                pakaianCount++;
                totalPakaian++;
            }
        }

        c = c->next;
        customerCount++;
    }

    cout << "=== Total Seluruh Pakaian: " << totalPakaian << " item ===\n" << endl;
}

