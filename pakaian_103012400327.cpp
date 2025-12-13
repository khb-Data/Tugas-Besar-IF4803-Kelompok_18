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
void insertPakaianFirst(ListPakaian &LP, adrPakaian P) {
    P->next = LP.first;
    LP.first = P;
}
