#ifndef PAKAIAN_H
#define PAKAIAN_H
#include <iostream>

using namespace std;
typedef string infotype;
typedef struct Pakaian* adrPakaian;

struct Pakaian {
    string idPakaian;
    string jenis;
    int berat;

    Pakaian *next;
};

typedef Pakaian* adrPakaian;

struct ListPakaian {
    adrPakaian first;
};


void createListPakaian(ListPakaian &LP);
adrPakaian createPakaian(string idP, string jenis, int berat);


void insertPakaianFirst(ListPakaian &LP, adrPakaian P);
void insertPakaianLast(ListPakaian &LP, adrPakaian P);


void deletePakaianFirst(ListPakaian &LP, adrPakaian &P);
void deletePakaianLast(ListPakaian &LP, adrPakaian &P);
void deletePakaianByID(ListPakaian &LP, string id);


adrPakaian findPakaian(ListPakaian LP, string id);


void showAllPakaian(ListPakaian LP);
void showAllPakaianUnique(ListCustomer LC); // versi unik semua customer

#endif
