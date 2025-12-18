#include "customer.h"
#include "pakaian.h"
#include <iostream>
using namespace std;

bool isEmptyCustomer(ListCustomer LC) {
    return (LC.first == nullptr);
}
void createListCustomer(ListCustomer &LC) {
    LC.first = nullptr;
    LC.last = nullptr;
}
adrCustomer createCustomer(infotypeCustomer x) {
    adrCustomer C = new Customer;
    C->info = x;
    C->next = nullptr;
    C->prev = nullptr;
    createListPakaian(C->child);
    return C;
}
void insertCustomerFirst(ListCustomer &LC, adrCustomer C) {
    if (isEmptyCustomer(LC)) {
        LC.first = C;
        LC.last = C;
    } else {
        C->next = LC.first;
        LC.first->prev = C;
        LC.first = C;
    }
}

adrCustomer findCustomer(ListCustomer LC, string id) {
    adrCustomer P = LC.first;

    while (P != nullptr && P->info.id != id) {
        P = P->next;
    }

    return P;
}

int hitungTotalCustomer(ListCustomer LC) {
    int count = 0;
    adrCustomer P = LC.first;

    while (P != nullptr) {
        count++;
        P = P->next;
    }

    return count;
}
void insertCustomerAfter(ListCustomer &LC, adrCustomer prec, adrCustomer C) {
    if (prec == nullptr) {
        cout << "Customer prec tidak ditemukan!" << endl;
        return;
    }


    if (prec == LC.last) {
        C->prev = LC.last;
        C->next = nullptr;
        LC.last->next = C;
        LC.last = C;
    } else {
        C->next = prec->next;
        C->prev = prec;
        prec->next->prev = C;
        prec->next = C;
    }
}

void inputDataDummy() {
    system("cls");
    cout << "========================================" << endl;
    cout << "    MEMUAT DATA DUMMY..." << endl;
    cout << "========================================" << endl;

    infotypeCustomer x;
    adrCustomer C;
    adrPakaian P;


    cout << "\n[1/4] Menambahkan Customer..." << endl;


    x.nama = "Budi";
    x.id = "C001";
    C = createCustomer(x);
    insertCustomerLast(LC, C);
    cout << "  + Customer Budi (C001) ditambahkan" << endl;


    x.nama = "Siti";
    x.id = "C002";
    C = createCustomer(x);
    insertCustomerLast(LC, C);
    cout << "  + Customer Siti (C002) ditambahkan" << endl;


    x.nama = "Andi";
    x.id = "C003";
    C = createCustomer(x);
    insertCustomerLast(LC, C);
    cout << "  + Customer Andi (C003) ditambahkan" << endl;


    x.nama = "Rina";
    x.id = "C004";
    C = createCustomer(x);
    insertCustomerLast(LC, C);
    cout << "  + Customer Rina (C004) ditambahkan" << endl;

    cout << "\n[2/4] Total 4 Customer berhasil ditambahkan!" << endl;


    cout << "\n[3/4] Menambahkan Pakaian..." << endl;


    C = findCustomer(LC, "C001");
    if (C != nullptr) {
        P = createPakaian("P001", "Kemeja", 2);
        insertPakaianLast(C->child, P);
        cout << "  + P001 (Kemeja, 2kg) → Budi" << endl;

        P = createPakaian("P002", "Celana", 3);
        insertPakaianLast(C->child, P);
        cout << "  + P002 (Celana, 3kg) → Budi" << endl;
    }


    C = findCustomer(LC, "C002");
    if (C != nullptr) {
        P = createPakaian("P003", "Blouse", 1);
        insertPakaianLast(C->child, P);
        cout << "  + P003 (Blouse, 1kg) → Siti" << endl;

        P = createPakaian("P004", "Rok", 2);
        insertPakaianLast(C->child, P);
        cout << "  + P004 (Rok, 2kg) → Siti" << endl;

        P = createPakaian("P005", "Jaket", 4);
        insertPakaianLast(C->child, P);
        cout << "  + P005 (Jaket, 4kg) → Siti" << endl;
    }


    C = findCustomer(LC, "C003");
    if (C != nullptr) {
        P = createPakaian("P006", "Kaos", 1);
        insertPakaianLast(C->child, P);
        cout << "  + P006 (Kaos, 1kg) → Andi" << endl;
    }


    cout << "  + Rina tidak memiliki pakaian (untuk testing)" << endl;

    cout << "\n[4/4] Total 6 Pakaian berhasil ditambahkan!" << endl;

    cout << "\n========================================" << endl;
    cout << "    DATA DUMMY BERHASIL DIMUAT!" << endl;
    cout << "========================================" << endl;
    cout << "\nRingkasan Data:" << endl;
    cout << "  - Customer: 4 orang" << endl;
    cout << "  - Pakaian : 6 item" << endl;
    cout << "  - Budi   : 2 pakaian" << endl;
    cout << "  - Siti   : 3 pakaian" << endl;
    cout << "  - Andi   : 1 pakaian" << endl;
    cout << "  - Rina   : 0 pakaian" << endl;
    cout << "\nSilakan gunakan menu untuk melihat data!" << endl;

    system("pause");
}

