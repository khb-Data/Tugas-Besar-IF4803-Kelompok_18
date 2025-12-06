#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include <iostream>
#include <string>  

using namespace std;
typedef string infotypeCustomer;

typedef struct Customer *adrCustomer;
 struct customerInfo {
    string id;
    string nama;
} 




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

#endif
