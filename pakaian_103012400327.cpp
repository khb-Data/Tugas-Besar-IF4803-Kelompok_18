#include "customer.h"
#include "pakaian.h"
#include <iostream>

using namespace std;


bool isEmptyPakaian(ListPakaian LP) {
    return LP.first == nullptr;
}

void createListPakaian(ListPakaian &LP) {
    LP.first = nullptr;
}

adrPakaian createPakaian(string idP, string jenis, int berat) {
    adrPakaian P = new Pakaian;
    P->idPakaian = idP;
    P->jenis = jenis;
    P->berat = berat;
    P->next = nullptr;
    return P;
}
void insertPakaianFirst(adrCustomer &C, adrPakaian P) {
    if (C->child.first == nullptr) {
        C->child.first = P;
    } else {
        P->next = C->child.first;
        C->child.first = P;
    }
}
void insertPakaianLast(ListPakaian &LP, adrPakaian p) {
    p->next = nullptr; 
    
    if (LP.first == nullptr) {
        LP.first = p;
    } else {
        adrPakaian q = LP.first;
        while (q->next != nullptr) {
            q = q->next;
        }
        q->next = p;
    }
}

