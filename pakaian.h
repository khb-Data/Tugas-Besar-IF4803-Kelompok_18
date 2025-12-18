#ifndef PAKAIAN_H
#define PAKAIAN_H
#include <iostream>
#include <string>

using namespace std;

// Forward declaration untuk menghindari circular dependency
struct Customer;
struct ListCustomer;
typedef struct Customer* adrCustomer;
typedef string infotype;
typedef struct Pakaian* adrPakaian;

struct Pakaian {
    string idPakaian;
    string jenis;
    int berat;
    adrPakaian next;
};

struct ListPakaian {
    adrPakaian first;
};

// Fungsi-fungsi Pakaian
void createListPakaian(ListPakaian &LP);
adrPakaian createPakaian(string idP, string jenis, int berat);

void insertPakaianFirst(adrCustomer C, adrPakaian P);
void insertPakaianLast(ListPakaian &LP, adrPakaian P);

void deletePakaianFirst(ListPakaian &LP, adrPakaian &P);
void deletePakaianLast(ListPakaian &LP, adrPakaian &P);
void deletePakaianByID(ListPakaian &LP, string id);

adrPakaian findPakaian(ListPakaian LP, string id);

void showAllPakaian(ListPakaian LP);

// Pindahkan deklarasi ini ke customer.h karena menggunakan ListCustomer
// void showAllPakaianUnique(ListCustomer LC);

#endif
