#include "pakaian.h"
#include "customer.h"
#include <iostream>
using namespace std;

adrPakaian findPakaian(ListPakaian LP, string id){
    adrPakaian p = LP.first;

    while (p != nullptr && p->idPakaian != id) {
        p = p->next;
    }

    return p;
}



void showAllPakaianUnique(ListCustomer LC){
    if (LC.first == nullptr) {
        cout << "--- List Customer KOSONG ---" << endl;
        return;
    }

    adrCustomer c = LC.first;
    int customerCount = 1;
    int totalPakaian = 0;

    cout << "\n=== Daftar Seluruh Pakaian dari Semua Customer ===\n";

    while (c != nullptr) {
        cout << "------------------------------------------------\n";
        cout << "CUSTOMER " << customerCount
             << " | ID: " << c->info.id
             << " | Nama: " << c->info.nama << endl;
        cout << "------------------------------------------------\n";

        ListPakaian customerLP = c->child;

        if (customerLP.first == nullptr) {
            cout << "   (Customer ini tidak memiliki pakaian)\n";
        } else {
            adrPakaian p = customerLP.first;
            int pakaianCount = 1;

            while (p != nullptr) {
                cout << "   " << pakaianCount << ". ID Pakaian : " << p->idPakaian << endl;
                cout << "      Jenis : " << p->jenis << endl;
                cout << "      Berat : " << p->berat << " kg\n";
                p = p->next;
                pakaianCount++;
                totalPakaian++;
            }
        }

        c = c->next;
        customerCount++;
    }

    cout << "\n=== Total Seluruh Pakaian: " << totalPakaian << " item ===\n";
}


