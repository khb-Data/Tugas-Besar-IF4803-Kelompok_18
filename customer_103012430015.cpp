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
    adrCustomer P;

    if (LC.first == NULL) {
        LC.first = C;
        LC.last = C;
        C->next = NULL;
        C->prev = NULL;
    }else if (C->info.nama < LC.first->info.nama) {
        C->next = LC.first;
        C->prev = NULL;
        LC.first->prev = C;
        LC.first = C;
    }else if (C->info.nama > LC.last->info.nama) {
        C->prev = LC.last;
        C->next = NULL;
        LC.last->next = C;
        LC.last = C;
    }else {
        P = LC.first;
        while (P != NULL && P->info.nama < C->info.nama) {
            P = P->next;
        }

        C->next = P;
        C->prev = P->prev;
        P->prev->next = C;
        P->prev = C;
    }
}

void showAllCustomer(ListCustomer LC){
    adrCustomer P = LC.first;

    if (P == NULL) {
        cout << "List customer kosong" << endl;
    } else {
        while (P != NULL) {
            cout << "Customer" << endl;
            cout << "----------------" << endl;
            cout << "Nama : " << P->info.nama << endl;
            cout << endl;
            P = P->next;
        }
    }
}
