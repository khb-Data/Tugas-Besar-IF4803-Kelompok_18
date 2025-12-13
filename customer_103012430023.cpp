#include "customer.h"
#include "pakaian.h"
#include <iostream>
using namespace std;


void deleteCustomerFirst(ListCustomer &LC, adrCustomer &C) {
    if (isEmptyCustomer(LC)) {
        C = nullptr;
        cout << "List Kosong, tidak ada data yang dihapus." << endl;
    } else {
        C = LC.first;

        if (LC.first == LC.last) {
            LC.first = nullptr;
            LC.last = nullptr;
        } else {
            LC.first = LC.first->next;
            LC.first->prev = nullptr;
            C->next = nullptr;
        }
    }
}

void deleteCustomerLast(ListCustomer &LC, adrCustomer &C) {
    if (isEmptyCustomer(LC)) {
        C = nullptr;
        cout << "List Kosong, tidak ada data yang dihapus." << endl;
    } else {
        C = LC.last;

        if (LC.first == LC.last) {
            LC.first = nullptr;
            LC.last = nullptr;
        } else {
            LC.last = LC.last->prev;
            LC.last->next = nullptr;
            C->prev = nullptr;
        }
    }
}

void deleteCustomerByID(ListCustomer &LC, string id) {
    adrCustomer C = findCustomer(LC, id);

    if (C == nullptr) {
        cout << "Data Customer dengan ID " << id << " tidak ditemukan." << endl;
    } else {
        if (C == LC.first) {
            deleteCustomerFirst(LC, C);
        } else if (C == LC.last) {
            deleteCustomerLast(LC, C);
        } else {
            adrCustomer prec = C->prev;
            adrCustomer next = C->next;

            prec->next = next;
            next->prev = prec;

            C->next = nullptr;
            C->prev = nullptr;
        }

    }
}
