#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include <iostream>
#include <string>
#include "pakaian.h"  // Include pakaian.h di sini

using namespace std;

typedef struct Customer *adrCustomer;

struct customerInfo {
    string id;
    string nama;
};
typedef customerInfo infotypeCustomer;

struct Customer {
    infotypeCustomer info;
    adrCustomer next;
    adrCustomer prev;
    ListPakaian child;
};

struct ListCustomer {
    adrCustomer first;
    adrCustomer last;
};

// Fungsi-fungsi Customer
bool isEmptyCustomer(ListCustomer LC);
void createListCustomer(ListCustomer &LC);
adrCustomer createCustomer(infotypeCustomer x);

void insertCustomerFirst(ListCustomer &LC, adrCustomer C);
void insertCustomerLast(ListCustomer &LC, adrCustomer C);
void insertCustomerSorted(ListCustomer &LC, adrCustomer C);

adrCustomer findCustomer(ListCustomer LC, string id);

void deleteCustomerFirst(ListCustomer &LC, adrCustomer &C);
void deleteCustomerLast(ListCustomer &LC, adrCustomer &C);
void deleteCustomerByID(ListCustomer &LC, string id);

void showAllCustomer(ListCustomer LC);

// Pindahkan deklarasi showAllPakaianUnique ke sini
void showAllPakaianUnique(ListCustomer LC);

#endif
